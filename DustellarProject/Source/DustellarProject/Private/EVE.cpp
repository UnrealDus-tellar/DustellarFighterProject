// Fill out your copyright notice in the Description page of Project Settings.


#include "EVE.h"
#include <Camera/CameraComponent.h>
#include <GameFramework/CharacterMovementComponent.h>
#include <GameFramework/SpringArmComponent.h>//@@스프링암
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "Components/SphereComponent.h"





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
			subsystem->AddMappingContext(imc_TPS, 0);
		}
	}

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

