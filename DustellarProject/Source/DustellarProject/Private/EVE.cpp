// Fill out your copyright notice in the Description page of Project Settings.


#include "EVE.h"
#include <Camera/CameraComponent.h>
#include <GameFramework/CharacterMovementComponent.h>
#include <GameFramework/SpringArmComponent.h>//@@��������
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "Components/SphereComponent.h"





// Sets default values
AEVE::AEVE()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//@@ SKM_Quinn_Simple �����ڽ��ϴ�
	ConstructorHelpers::FObjectFinder<USkeletalMesh> TempMesh(TEXT("/Script/Engine.SkeletalMesh'/Game/DevelopersFolder/YJH/YJH_Scarlett/Mannequin/Character_UE5/Meshes/SKM_Manny.SKM_Manny'"));
	//@@���ҽ��� ����� �ҷ������ٸ� .Succeeded()
	if (TempMesh.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(TempMesh.Object);
		//@@ mesh������Ʈ ��ġ�� ��������
		GetMesh()->SetRelativeLocationAndRotation(FVector(0, 0, -90), FRotator(0, -90, 0));
	}
	springArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
	springArmComp->SetupAttachment(RootComponent);
	springArmComp->SetRelativeLocation(FVector(0, 70, 90));
	springArmComp->TargetArmLength = 400;

	//@@ī�޶�����
	tpsCamComp = CreateDefaultSubobject<UCameraComponent>(TEXT("TpsCamComp"));
	tpsCamComp->SetupAttachment(springArmComp);

	springArmComp->bUsePawnControlRotation = true;
	tpsCamComp->bUsePawnControlRotation = false;
	bUseControllerRotationYaw = true;


	//@@�� ���Ͽ� ������Ʈ ����########################################
//@@������
	RHandCollision = CreateDefaultSubobject<USphereComponent>(TEXT("RightHandCollision"));
	//@@�޽� ���̷�Ż���� ���ϴ»����� �ؿ� ���ϻ���
	//@@FName("hand_rSocket") : �̸� �޽ÿ� ����� �� ���� �̸� (������)
	RHandCollision->SetupAttachment(GetMesh(), FName("hand_rSocket"));
	//@@���� �ÿ��� Ȱ��ȭ�ϱ� ���� �⺻ ��Ȱ��ȭ
	RHandCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	//@@�浹 ���� ����
	RHandCollision->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	//@@������Ʈ Ÿ�� ����, WorldDynamic: �����̴� ��ü
	//@@���� ignoreó��
	RHandCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	//@@Pawn(�÷��̾�/��)�� Overlap �̺�Ʈ �߻�
	RHandCollision->SetCollisionResponseToChannel(ECC_Pawn, ECollisionResponse::ECR_Overlap);//�����Ҵ�
	RHandCollision->SetRelativeLocation(FVector(-10.0f, 0.0f, 0.0f));
	RHandCollision->SetSphereRadius(15.0f, true);


	//@@�޼�
	LHandCollision = CreateDefaultSubobject<USphereComponent>(TEXT("LeftHandCollision"));
	LHandCollision->SetupAttachment(GetMesh(), FName("hand_lSocket"));
	LHandCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	LHandCollision->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
	LHandCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
	LHandCollision->SetCollisionResponseToChannel(ECC_Pawn, ECollisionResponse::ECR_Overlap);
	LHandCollision->SetRelativeLocation(FVector(10.0f, 0.0f, 0.0f));
	LHandCollision->SetSphereRadius(15.0f, true);

}

//@@ ����÷���
void AEVE::BeginPlay()
{
	Super::BeginPlay();
	
	//@@�ʱ�ӵ��� �ȱ�� ����
	GetCharacterMovement()->MaxWalkSpeed = walkSpeed;

	//@@ ���ڽ��� ��ǲ�ý��ۿ� imc_TPS ����ϱ�
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

//@@ ƽ
void AEVE::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	//@@������ǥ�谡 �ƴ϶� ���� ��ǥ�踦 ����ϱ� ����
	direction = FTransform(GetControlRotation()).TransformVector(direction);
	AddMovementInput(direction);
	//@@�����ʱ�ȭ
	direction = FVector::ZeroVector;

}

//@@ ���ε��ϴ°�
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
		//�޸��� �Է� �̺�Ʈ ó�� �Լ� ���ε�
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
	//���� �޸��� �����
	if (movement->MaxWalkSpeed > walkSpeed)
	{
		//�ȱ� �ӵ��� ��ȯ
		movement->MaxWalkSpeed = walkSpeed;
	}
	else
	{
		movement->MaxWalkSpeed = runSpeed;
	}
}

