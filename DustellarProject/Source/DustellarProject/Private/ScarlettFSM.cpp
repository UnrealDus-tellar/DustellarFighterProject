// Fill out your copyright notice in the Description page of Project Settings.


#include "ScarlettFSM.h"
#include "ScarlettPlayer.h"
#include "Scarlett.h"
#include "ScarlettAnim.h"
#include "DustellarProjectCharacter.h"

#include "Kismet/GameplayStatics.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values for this component's properties
UScarlettFSM::UScarlettFSM()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UScarlettFSM::BeginPlay()
{
	Super::BeginPlay();

	auto actor = UGameplayStatics::GetActorOfClass(GetWorld(), AEVE::StaticClass());
	target = Cast<AEVE>(actor);
	me = Cast<AScarlett>(GetOwner());
	anim = Cast<UScarlettAnim>(me->GetMesh()->GetAnimInstance());

	if (anim)
	{
		anim->ScarlettFSMRef = this;
	}
	
}


// Called every frame
void UScarlettFSM::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	switch (ScarlettState)
	{
	case EScarlettState::Idle:
		IdleState();
		break;
	case EScarlettState::Move:
		MoveState();
		break;
	case EScarlettState::Attack:
		AttackState();
		break;
	case EScarlettState::AttackDelay:
		AttackDelayState();
		break;
	case EScarlettState::Hit:
		HitState();
		break;
	case EScarlettState::Die:
		DieState();
		break;
	}

	FString logMsg = UEnum::GetValueAsString(ScarlettState);
	GEngine->AddOnScreenDebugMessage(0, 2.0f, FColor::Green, logMsg);
}

void UScarlettFSM::IdleState()
{
	FVector destination = target->GetActorLocation(); // 목적지
	FVector dir = destination - me->GetActorLocation(); // 방향

	if (dir.Size() < detectRange)
	{
		ScarlettState = EScarlettState::Move;

		anim->animState = ScarlettState;
	}
}

void UScarlettFSM::MoveState()
{
	FVector destination = target->GetActorLocation(); // 목적지
	FVector dir = destination - me->GetActorLocation(); // 방향
	me->AddMovementInput(dir.GetSafeNormal()); // 이동

	currentTime += GetWorld()->DeltaTimeSeconds;

	if (dir.Size() < attackRange)
	{
		ScarlettState = EScarlettState::Attack;

		anim->animState = ScarlettState;

		currentTime = 0.0f;
	}

	if (dir.Size() > detectRange)
	{
		ScarlettState = EScarlettState::Idle;

		anim->animState = ScarlettState;
	}
}

void UScarlettFSM::AttackState()
{
	currentTime += GetWorld()->DeltaTimeSeconds;

	if (!me || !target)
	{
		return;
	}

	if (!bIsAttacking && currentTime > attackDelayTime)
	{
		me->GetCharacterMovement()->bOrientRotationToMovement = false;

		currentTime = 0.0f;

		FVector dir = target->GetActorLocation() - me->GetActorLocation();
		dir.Z = 0.f;
		me->SetActorRotation(dir.Rotation());

		int32 Index = FMath::RandRange(1, 4);

		if (LastAttackIndex == Index)
		{
			Index = 1 + (Index % 4);
		}
		LastAttackIndex = Index;

		const FName Section = *FString::Printf(TEXT("Attack%d"), Index);
		UE_LOG(LogTemp, Warning, TEXT("Section : %s"), *Section.ToString());

		anim->PlayAttackAnim(Section);
		anim->bAttackPlay = true;
		bIsAttacking = true;

		return;
	}
}

void UScarlettFSM::AttackDelayState()
{
	currentTime += GetWorld()->DeltaTimeSeconds;


	if (currentTime < attackDelayTime)
	{
		return;
	}

	if (anim)
	{
		anim->StopCurrentMontage(0.1f); // 몽타주 정지
	}

	if (me && me->GetCharacterMovement())
	{
		me->GetCharacterMovement()->bOrientRotationToMovement = true; // 공격이 끝나고 회전
	}

	currentTime = 0.0f;

	const float dist = FVector::Dist(target->GetActorLocation(), me->GetActorLocation());

	if (dist < attackRange)
	{
		ScarlettState = EScarlettState::Attack;
	}
	else if (dist < detectRange)
	{
		ScarlettState = EScarlettState::Move;
	}
	else
	{
		ScarlettState = EScarlettState::Idle;
	}

	anim->animState = ScarlettState;
}

void UScarlettFSM::HitState()
{
	currentTime += GetWorld()->DeltaTimeSeconds;

	if (currentTime < damageDelayTime)
	{
		return;
	}

	const float dist = FVector::Dist(target->GetActorLocation(), me->GetActorLocation());

	if (dist < attackRange)
	{
		ScarlettState = EScarlettState::Attack;
	}
	else if (dist < detectRange)
	{
		ScarlettState = EScarlettState::Move;
	}
	else
	{
		ScarlettState = EScarlettState::Idle;
	}

	anim->animState = ScarlettState;
	currentTime = 0.0f;
}

void UScarlettFSM::DieState()
{
	if (anim->bDieDone == false)
	{
		return;
	}

	FVector P0 = me->GetActorLocation();
	FVector vt = FVector::DownVector * dieSpeed * GetWorld()->DeltaTimeSeconds;
	FVector P = P0 + vt;

	me->SetActorLocation(P);

	if (P.Z < -200.0f)
	{
		me->Destroy();
	}
}

void UScarlettFSM::OnHitProcess()
{
	hp--;

	bIsAttacking = false;

	if (anim)
	{
		anim->bAttackPlay = false;
		anim->StopCurrentMontage(0.0f);
	}

	if (me && me->GetCharacterMovement())
	{
		me->GetCharacterMovement()->bOrientRotationToMovement = true;
	}

	if (hp > 0)
	{
		ScarlettState = EScarlettState::Hit;

		currentTime = 0.0f;

		int32 index = FMath::RandRange(0, 1);
		FString sectionName = FString::Printf(TEXT("Hit%d"), index);
		anim->PlayHitAnim(FName(*sectionName));
	}
	else
	{
		ScarlettState = EScarlettState::Die;
		me->GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);

		anim->PlayHitAnim(TEXT("Die"));
	}

	anim->animState = ScarlettState;
}

void UScarlettFSM::OnAttackEnd()
{
	if (me && target)
	{
		FVector dir = target->GetActorLocation() - me->GetActorLocation();
		dir.Z = 0.f;
		me->SetActorRotation(dir.Rotation());
	}

	if (anim)
	{
		anim->PauseCurrentMontage();
	}

	bIsAttacking = false;
	ScarlettState = EScarlettState::AttackDelay;
	anim->animState = ScarlettState;
}