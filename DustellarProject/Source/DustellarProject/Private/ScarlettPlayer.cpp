// Fill out your copyright notice in the Description page of Project Settings.


#include "ScarlettPlayer.h"
#include "Scarlett.h"
#include "ScarlettFSM.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AScarlettPlayer::AScarlettPlayer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<USkeletalMesh> TempMesh(TEXT("/Script/Engine.SkeletalMesh'/Game/DevelopersFolder/YJH/YJH_Scarlett/Mannequin/Character_UE5/Meshes/SKM_Manny.SKM_Manny'"));

	if (TempMesh.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(TempMesh.Object);
		GetMesh()->SetRelativeLocation(FVector(0.0f, 0.0f, -90.0f));
		GetMesh()->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));
	}

	springArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	springArmComp->SetupAttachment(RootComponent);
	springArmComp->SetRelativeLocation(FVector(0.0f, 70.0f, 90.0f));
	springArmComp->TargetArmLength = 400.0f;
	springArmComp->bUsePawnControlRotation = true;

	tpsCamComp = CreateDefaultSubobject<UCameraComponent>(TEXT("TPSCamComp"));
	tpsCamComp->SetupAttachment(springArmComp);
	tpsCamComp->bUsePawnControlRotation = false;

	bUseControllerRotationYaw = true;
}

// Called when the game starts or when spawned
void AScarlettPlayer::BeginPlay()
{
	Super::BeginPlay();
	
	auto pc = Cast<APlayerController>(Controller);

	if (pc != nullptr)
	{
		auto subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(pc->GetLocalPlayer());
		if (subsystem != nullptr)
		{
			subsystem->AddMappingContext(imc_Player, 0);
		}
	}
}

// Called every frame
void AScarlettPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	direction = FTransform(GetControlRotation()).TransformVector(direction);
	AddMovementInput(direction);
	direction = FVector::ZeroVector;
}

// Called to bind functionality to input
void AScarlettPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	Super::SetupPlayerInputComponent(PlayerInputComponent);

	auto PlayerInput = Cast<UEnhancedInputComponent>(PlayerInputComponent);

	if (PlayerInput != nullptr)
	{
		PlayerInput->BindAction(ia_PlayerTurn, ETriggerEvent::Triggered, this, &AScarlettPlayer::PlayerTurn);
		PlayerInput->BindAction(ia_PlayerLookUp, ETriggerEvent::Triggered, this, &AScarlettPlayer::PlayerLookUp);
		PlayerInput->BindAction(ia_PlayerMove, ETriggerEvent::Triggered, this, &AScarlettPlayer::PlayerMove);
		PlayerInput->BindAction(ia_PlayerJump, ETriggerEvent::Started, this, &AScarlettPlayer::PlayerJump);
		PlayerInput->BindAction(ia_PlayerAttack, ETriggerEvent::Started, this, &AScarlettPlayer::PlayerAttack);

	}
}

void AScarlettPlayer::PlayerTurn(const FInputActionValue& inputValue)
{
	float value = inputValue.Get<float>();
	AddControllerYawInput(value);
}

void AScarlettPlayer::PlayerLookUp(const FInputActionValue& inputValue)
{
	float value = inputValue.Get<float>();
	AddControllerPitchInput(value);
}

void AScarlettPlayer::PlayerMove(const FInputActionValue& inputValue)
{
	FVector2D value = inputValue.Get<FVector2D>();

	direction.X = value.X;
	direction.Y = value.Y;
}

void AScarlettPlayer::PlayerJump(const FInputActionValue& inputValue)
{
	Jump();
}

void AScarlettPlayer::PlayerAttack(const FInputActionValue& inputValue)
{
	AScarlett* Scarlett = Cast<AScarlett>(UGameplayStatics::GetActorOfClass(GetWorld(), AScarlett::StaticClass()));

	if (!Scarlett)
	{
		return;
	}

	if (UScarlettFSM* FSM = Scarlett->FindComponentByClass <UScarlettFSM>())
	{
		FSM->OnHitProcess();
	}
}

