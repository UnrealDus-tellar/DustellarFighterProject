// Fill out your copyright notice in the Description page of Project Settings.


#include "EVE.h"
#include <Camera/CameraComponent.h>
#include <GameFramework/CharacterMovementComponent.h>
#include <GameFramework/SpringArmComponent.h>//@@스프링암
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "Components/SphereComponent.h"
#include "Component/AttackComponent.h"//@@공격컴포
#include "Component/StatComponent.h"//@@스탯컴포
#include <Kismet/GameplayStatics.h>//@@ 충돌데미지에서 필요함

////@@디버그용 문자   UE_LOG(LogTemp, Warning, TEXT("Hi"));
////@@			UE_LOG(LogTemp, Warning, TEXT("H %s"), *OtherActor->GetName());






// Sets default values
AEVE::AEVE()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//@@ SKM_Quinn_Simple 들고오겠습니다
	ConstructorHelpers::FObjectFinder<USkeletalMesh> TempMesh(TEXT("/Script/Engine.SkeletalMesh'/Game/DevelopersFolder/YJH/YJH_Scarlett/Mannequin/Character_UE5/Meshes/SKM_Manny.SKM_Manny'"));
	//@@리소스가 제대로 불러와졌다면 .Succeeded()
	if (TempMesh.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(TempMesh.Object);
		//@@ mesh컴포넌트 위치랑 각도조정
		GetMesh()->SetRelativeLocationAndRotation(FVector(0, 0, -90), FRotator(0, -90, 0));
	}
	springArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	springArmComp->SetupAttachment(RootComponent);
	springArmComp->SetRelativeLocation(FVector(0, 70, 90));
	springArmComp->TargetArmLength = 400;

	//@@카메라컴프
	tpsCamComp = CreateDefaultSubobject<UCameraComponent>(TEXT("TpsCamComp"));
	tpsCamComp->SetupAttachment(springArmComp);

	springArmComp->bUsePawnControlRotation = true;
	tpsCamComp->bUsePawnControlRotation = false;
	bUseControllerRotationYaw = true;

	GetCharacterMovement()->bOrientRotationToMovement = true;//################
	

	//@@컴포넌트 붙이는곳####################################################
	//@@생성자에 컴포넌트 달아주기
	//@@스탯컴포넌트
	StatComp = CreateDefaultSubobject<UStatComponent>(TEXT("StatComp"));
	//@@어택컴포넌트
	AttackComp = CreateDefaultSubobject<UAttackComponent>(TEXT("AttackComp"));
	//@@####################################################################


	//@@손 소켓에 컴포넌트 생성########################################
//@@오른손
	RHandCollision = CreateDefaultSubobject<USphereComponent>(TEXT("RightHandCollision"));
	//@@메쉬 스켈레탈에서 원하는뼈구조 밑에 소켓생성
	//@@FName("hand_rSocket") : 미리 메시에 만들어 둔 소켓 이름 (오른손)
	RHandCollision->SetupAttachment(GetMesh(), FName("hand_rSocket"));
	//@@공격 시에만 활성화하기 위해 기본 비활성화
	RHandCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	//@@충돌 종류 설정
	RHandCollision->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	//@@오브젝트 타입 설정, WorldDynamic: 움직이는 객체
	//@@전부 ignore처리
	RHandCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	//@@Pawn(플레이어/적)만 Overlap 이벤트 발생
	RHandCollision->SetCollisionResponseToChannel(ECC_Pawn, ECollisionResponse::ECR_Overlap);//수동할당
	RHandCollision->SetRelativeLocation(FVector(-10.0f, 0.0f, 0.0f));
	RHandCollision->SetSphereRadius(15.0f, true);


	//@@왼손
	LHandCollision = CreateDefaultSubobject<USphereComponent>(TEXT("LeftHandCollision"));
	LHandCollision->SetupAttachment(GetMesh(), FName("hand_lSocket"));
	LHandCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	LHandCollision->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	LHandCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	LHandCollision->SetCollisionResponseToChannel(ECC_Pawn, ECollisionResponse::ECR_Overlap);
	LHandCollision->SetRelativeLocation(FVector(10.0f, 0.0f, 0.0f));
	LHandCollision->SetSphereRadius(15.0f, true);

}

//@@ 비긴플레이
void AEVE::BeginPlay()
{
	Super::BeginPlay();
	
	//@@초기속도를 걷기로 설정
	GetCharacterMovement()->MaxWalkSpeed = walkSpeed;

	//@@ 인핸스드 인풋시스템에 imc_TPS 등록하기
	auto pc = Cast<APlayerController>(Controller);
	if (pc)
	{
		auto subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(pc->GetLocalPlayer());
		if (subsystem)
		{
			subsystem->AddMappingContext(imc_EVE, 0);
		}
	}

	//@@델리게이트 함수 연결시켜줄때 필요한것#######################################
	if (RHandCollision)
	{
		RHandCollision->OnComponentBeginOverlap.AddDynamic(
			this,
			&AEVE::OnHandOverlap
		);
	}

	if (LHandCollision)
	{
		LHandCollision->OnComponentBeginOverlap.AddDynamic(
			this,
			&AEVE::OnHandOverlap
		);
	}
	//@@#############################################################################
}

//@@ 틱
void AEVE::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//@@월드좌표계가 아니라 로컬 좌표계를 사용하기 위함
	direction = FTransform(GetControlRotation()).TransformVector(direction);
	AddMovementInput(direction);
	//@@방향초기화
	direction = FVector::ZeroVector;

	FRotator ControlRot = Controller->GetControlRotation();
	FRotator YawRot(0, ControlRot.Yaw, 0);

	FVector ForwardDir = FRotationMatrix(YawRot).GetUnitAxis(EAxis::X);
	FVector RightDir = FRotationMatrix(YawRot).GetUnitAxis(EAxis::Y);

	//float ForwardValue = GetInputAxisValue("MoveForward");
	//float RightValue = GetInputAxisValue("MoveRight");

	//FVector MoveDir = FVector(ForwardValue, RightValue, 0.f);

	//if (!MoveDir.IsNearlyZero())
	//{
	//	MoveDir.Normalize();

	//	// 이동 방향을 회전으로 변환
	//	FRotator TargetRot = MoveDir.Rotation();
	//	TargetRot.Pitch = 0.f;
	//	TargetRot.Roll = 0.f;

	//	// 부드럽게 보간 회전 (10.f = 회전속도)
	//	FRotator NewRot = FMath::RInterpTo(GetActorRotation(), TargetRot, DeltaTime, 10.f);
	//	SetActorRotation(NewRot);
	//}

}

//@@ 바인딩하는곳
void AEVE::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	auto PlayerInput = CastChecked<UEnhancedInputComponent>(PlayerInputComponent);
	if (PlayerInput)
	{
		
		PlayerInput->BindAction(ia_LookUp, ETriggerEvent::Triggered, this, &AEVE::LookUp);
		PlayerInput->BindAction(ia_Turn, ETriggerEvent::Triggered, this, &AEVE::Turn);
		PlayerInput->BindAction(ia_Move, ETriggerEvent::Triggered, this, &AEVE::Move);
		PlayerInput->BindAction(ia_Jump, ETriggerEvent::Triggered, this, &AEVE::InputJump);
		//달리기 입력 이벤트 처리 함수 바인딩
		PlayerInput->BindAction(ia_Run, ETriggerEvent::Started, this, &AEVE::InputRun);
		PlayerInput->BindAction(ia_Run, ETriggerEvent::Completed, this, &AEVE::InputRun);
		//@@공격바인딩
//@@평타, 홀드평타
//@@맵핑해주셔야됩니다
			PlayerInputComponent->BindAction("LeftAttack", IE_Pressed, this, &AEVE::LeftAttackPressed);
		PlayerInputComponent->BindAction("LeftAttack", IE_Released, this, &AEVE::LeftAttackReleased);
		PlayerInputComponent->BindAction("RightAttack", IE_Pressed, this, &AEVE::RightAttackPressed);
		PlayerInputComponent->BindAction("RightAttack", IE_Released, this, &AEVE::RightAttackReleased);

		//@@스킬
		PlayerInputComponent->BindAction("Skill1", IE_Pressed, this, &AEVE::Skill1);
		PlayerInputComponent->BindAction("Skill2", IE_Pressed, this, &AEVE::Skill2);
		PlayerInputComponent->BindAction("Skill3", IE_Pressed, this, &AEVE::Skill3);
		PlayerInputComponent->BindAction("Skill4", IE_Pressed, this, &AEVE::Skill4);
	}
}


void AEVE::Turn(const FInputActionValue& inputValue)
{
	float value = inputValue.Get<float>();
	AddControllerYawInput(value);
}

void AEVE::LookUp(const FInputActionValue& inputValue)
{
	float value = inputValue.Get<float>();
	AddControllerPitchInput(value);
}

void AEVE::Move(const FInputActionValue& inputValue)
{
	FVector2D value = inputValue.Get<FVector2D>();
	direction.X = value.X;
	direction.Y = value.Y;
}

void AEVE::InputJump(const FInputActionValue& inputValue)
{
	Jump();
}

void AEVE::InputRun()
{
	auto movement = GetCharacterMovement();
	//현재 달리기 모드라면
	if (movement->MaxWalkSpeed > walkSpeed)
	{
		//걷기 속도로 전환
		movement->MaxWalkSpeed = walkSpeed;
	}
	else
	{
		movement->MaxWalkSpeed = runSpeed;
	}
}

//@@좌클릭
void AEVE::LeftAttackPressed()
{
	AttackInputStartTime = GetWorld()->GetTimeSeconds(); //@@입력 시작 시간 기록
	bLeftAttackHold = false; //@@홀드공격 아직 안했음
	

	//@@ 0.3초 후 hold 공격 발동 예약
	GetWorld()->GetTimerManager().SetTimer(LeftAttackReleasedTimer, [this]()
		{
			if (!bLeftAttackHold)
			{
				AttackComp->HandleAttackInput(EAttackInput::LeftHold); //@@ hold 발동
				AttackComp->ComboCount = 0;
				bLeftAttackHold = true; //@@ 중복 방지
			}
		},
		AttackComp->HoldThreshold, //@@ 0.3초
		false);
}

//@@좌클릭떼면
void AEVE::LeftAttackReleased()
{
	//@@홀드공격 발동안됬으면 왼공격
	if (!bLeftAttackHold)
	{
		AttackComp->HandleAttackInput(EAttackInput::LeftClick);
	}
	//@@타이머초기화
	GetWorld()->GetTimerManager().ClearTimer(LeftAttackReleasedTimer);
}

//@@우클릭
void AEVE::RightAttackPressed()
{
	AttackInputStartTime = GetWorld()->GetTimeSeconds(); //@@ 입력 시작 시간 기록
	bRightAttackHold = false; //@@ 홀드공격 아직 안했음

	//@@ 0.3초 후 hold 공격 발동 예약
	GetWorld()->GetTimerManager().SetTimer(RightAttackReleasedTimer, [this]()
		{
			if (!bRightAttackHold)
			{
				AttackComp->HandleAttackInput(EAttackInput::RightHold); //@@ hold 발동
				bRightAttackHold = true; //@@ 중복 방지
			}
		},
		AttackComp->HoldThreshold, //@@ 0.3초
		false);
}

//@@ 우클릭떼면
void AEVE::RightAttackReleased()
{
	//@@홀드공격 발동안됬으면 우공격
	if (!bRightAttackHold)
	{
		AttackComp->HandleAttackInput(EAttackInput::RightClick);
	}
	//@@타이머초기화
	GetWorld()->GetTimerManager().ClearTimer(RightAttackReleasedTimer);
}
//@@#############################################################################



//@@오버랩 발생할때 상대방에게 데미지를 줍니다##########################################
void AEVE::OnHandOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//@@UE_LOG(LogTemp, Warning, TEXT("HandOverlap On"));
	if (OtherActor && OtherActor != this)
	{
		float DamageToApply = 0.f;

		if (OverlappedComponent == RHandCollision)
		{

			DamageToApply = AttackComp->RightAttackDamage;

		}
		else if (OverlappedComponent == LHandCollision)
		{

			DamageToApply = AttackComp->LeftAttackDamage;
		}


		//@@지금 데미지를 줄 수 없거나, 상대가 없거나, 자기 자신이면 그냥 무시하고 함수 종료
		if (!bCanDamage || !OtherActor || OtherActor == this) return;

		//@@ 2️ 데미지 적용
		UGameplayStatics::ApplyDamage(
			OtherActor,      //@@ 데미지 받을 액터
			DamageToApply,				  //@@ 데미지 값
			GetController(), //@@ 공격자 컨트롤러
			this,            //@@ 공격자 액터
			UDamageType::StaticClass() //@@ 데미지 타입
		);
		UE_LOG(LogTemp, Warning, TEXT("Overlap with: %s"), *OtherActor->GetName());
		if (!bCanDamage) return;

		bCanDamage = false;

		//@@데미지가 중첩으로 들어가서 한프레임 뒤에 데미지를 줄수있게했습니다
		GetWorld()->GetTimerManager().SetTimerForNextTick([this]()
			{
				bCanDamage = true;
			});

		//@@ 3️ 추가로 피격 효과, 사운드, 파티클 등을 여기서 실행 가능
		//@@ 예: PlayHitEffect(OtherActor->GetActorLocation());
	}

	//@@ 4️ bFromSweep, SweepResult 활용 가능
	//@@ 예: 충돌 위치 확인 후, 피격 방향이나 반동 계산 가능
	//@@ FVector HitLocation = SweepResult.ImpactPoint;
}
//@@########################################################################################




//@@스킬 입력
void AEVE::Skill1() { AttackComp->UseSkill(0); }
void AEVE::Skill2() { AttackComp->UseSkill(1); }
void AEVE::Skill3() { AttackComp->UseSkill(2); }
void AEVE::Skill4() { AttackComp->UseSkill(3); }

