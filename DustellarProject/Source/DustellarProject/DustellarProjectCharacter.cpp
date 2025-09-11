//// Copyright Epic Games, Inc. All Rights Reserved.
//
//#include "DustellarProjectCharacter.h"
//#include "Engine/LocalPlayer.h"
//#include "Camera/CameraComponent.h"
//#include "Components/CapsuleComponent.h"
//#include "GameFramework/CharacterMovementComponent.h"
//#include "GameFramework/SpringArmComponent.h"
//#include "GameFramework/Controller.h"
//#include "EnhancedInputComponent.h"
//#include "EnhancedInputSubsystems.h"
//#include "InputActionValue.h"
//#include <Kismet/GameplayStatics.h>//@@ 충돌데미지에서 필요함
//#include "Component/AttackComponent.h"//@@공격컴포
//#include "Component/StatComponent.h"//@@스탯컴포
//#include "DustellarProject.h"
//
////@@디버그용 문자   UE_LOG(LogTemp, Warning, TEXT("Hi"));
////@@			UE_LOG(LogTemp, Warning, TEXT("H %s"), *OtherActor->GetName());
//
////@@ SKM_Quinn_Simple 로 
////@@ 동작 바인딩해주세요
////@@ animclass combat
////@@ project setting -> input -> 우클릭 좌클릭 스킬 바인딩해주세요
////@@생성자
//ADustellarProjectCharacter::ADustellarProjectCharacter()
//{
////@@3인칭기본설정 ####################################################################
//	// Set size for collision capsule
//	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);
//		
//	// Don't rotate when the controller rotates. Let that just affect the camera.
//	bUseControllerRotationPitch = false;
//	bUseControllerRotationYaw = false;
//	bUseControllerRotationRoll = false;
//
//	// Configure character movement
//	GetCharacterMovement()->bOrientRotationToMovement = true;
//	GetCharacterMovement()->RotationRate = FRotator(0.0f, 500.0f, 0.0f);
//
//	// Note: For faster iteration times these variables, and many more, can be tweaked in the Character Blueprint
//	// instead of recompiling to adjust them
//	GetCharacterMovement()->JumpZVelocity = 500.f;
//	GetCharacterMovement()->AirControl = 0.35f;
//	GetCharacterMovement()->MaxWalkSpeed = 500.f;
//	GetCharacterMovement()->MinAnalogWalkSpeed = 20.f;
//	GetCharacterMovement()->BrakingDecelerationWalking = 2000.f;
//	GetCharacterMovement()->BrakingDecelerationFalling = 1500.0f;
//
//	// Create a camera boom (pulls in towards the player if there is a collision)
//	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
//	CameraBoom->SetupAttachment(RootComponent);
//	CameraBoom->TargetArmLength = 400.0f;
//	CameraBoom->bUsePawnControlRotation = true;
//
//	// Create a follow camera
//	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
//	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName);
//	FollowCamera->bUsePawnControlRotation = false;
//
//
////@@###################################################################
//
// //@@컴포넌트 붙이는곳####################################################
//	//@@생성자에 컴포넌트 달아주기
//	//@@스탯컴포넌트
//	StatComp = CreateDefaultSubobject<UStatComponent>(TEXT("StatComp"));
//	//@@어택컴포넌트
//	AttackComp = CreateDefaultSubobject<UAttackComponent>(TEXT("AttackComp"));
//	//@@####################################################################
//
//	//@@손 소켓에 컴포넌트 생성########################################
//	//@@오른손
//	RHandCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("RightHandCollision"));
//	//@@메쉬 스켈레탈에서 원하는뼈구조 밑에 소켓생성
//	//@@FName("hand_rSocket") : 미리 메시에 만들어 둔 소켓 이름 (오른손)
//	RHandCollision->SetupAttachment(GetMesh(), FName("hand_rSocket"));
//	//@@공격 시에만 활성화하기 위해 기본 비활성화
//	RHandCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
//	//@@충돌 종류 설정
//	RHandCollision->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
//	//@@오브젝트 타입 설정, WorldDynamic: 움직이는 객체
//	//@@전부 ignore처리
//	RHandCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
//	//@@Pawn(플레이어/적)만 Overlap 이벤트 발생
//	RHandCollision->SetCollisionResponseToChannel(ECC_Pawn, ECollisionResponse::ECR_Overlap);//수동할당
//	RHandCollision->InitCapsuleSize(5.f, 15.f);
//	//@@위치 (-10,0,0) 회전(0,90,0) 스케일(2,2,2) 로 바꿔주세요
//	//@@GenerateOverlapEvnets 체크해주세요
//	//@@Collision Enabled 에서 Query Only 체크해주세요
//
//
//	//@@왼손
//	LHandCollision = CreateDefaultSubobject<UCapsuleComponent>(TEXT("LeftHandCollision"));
//	LHandCollision->SetupAttachment(GetMesh(), FName("hand_lSocket"));
//	LHandCollision->SetCollisionEnabled(ECollisionEnabled::NoCollision);
//	LHandCollision->SetCollisionObjectType(ECollisionChannel::ECC_WorldDynamic);
//	LHandCollision->SetCollisionResponseToAllChannels(ECollisionResponse::ECR_Ignore);
//	LHandCollision->SetCollisionResponseToChannel(ECC_Pawn, ECollisionResponse::ECR_Overlap);
//	LHandCollision->InitCapsuleSize(5.f, 15.f);
//	//@@위치 (10,0,0) 회전(0,90,0) 스케일(2,2,2) 로 바꿔주세요
//	//@@GenerateOverlapEvnets 체크해주세요
//	//@@Collision Enabled 에서 Query Only 체크해주세요
//	//@@##################################################################################################
//}
//
////@@비긴플레이
//void ADustellarProjectCharacter::BeginPlay()
//{
//	Super::BeginPlay();
//	//@@델리게이트 함수 연결시켜줄때 필요한것#######################################
//	if (RHandCollision)
//	{
//		RHandCollision->OnComponentBeginOverlap.AddDynamic(
//			this,
//			&ADustellarProjectCharacter::OnHandOverlap
//		);
//	}
//
//	if (LHandCollision)
//	{
//		LHandCollision->OnComponentBeginOverlap.AddDynamic(
//			this,
//			&ADustellarProjectCharacter::OnHandOverlap
//		);
//	}
//	//@@#############################################################################
//}
//
////@@입력바인딩
//void ADustellarProjectCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
//{
//	// Set up action bindings
//	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
//		
//		// Jumping
//		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
//		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);
//
//		// Moving
//		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ADustellarProjectCharacter::Move);
//		EnhancedInputComponent->BindAction(MouseLookAction, ETriggerEvent::Triggered, this, &ADustellarProjectCharacter::Look);
//
//		// Looking
//		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ADustellarProjectCharacter::Look);
//	
//		//@@공격바인딩
//		//@@평타, 홀드평타
//		//@@맵핑해주셔야됩니다
//		PlayerInputComponent->BindAction("LeftAttack", IE_Pressed, this, &ADustellarProjectCharacter::LeftAttackPressed);
//		PlayerInputComponent->BindAction("LeftAttack", IE_Released, this, &ADustellarProjectCharacter::LeftAttackReleased);
//		PlayerInputComponent->BindAction("RightAttack", IE_Pressed, this, &ADustellarProjectCharacter::RightAttackPressed);
//		PlayerInputComponent->BindAction("RightAttack", IE_Released, this, &ADustellarProjectCharacter::RightAttackReleased);
//
//		//@@스킬
//		PlayerInputComponent->BindAction("Skill1", IE_Pressed, this, &ADustellarProjectCharacter::Skill1);
//		PlayerInputComponent->BindAction("Skill2", IE_Pressed, this, &ADustellarProjectCharacter::Skill2);
//		PlayerInputComponent->BindAction("Skill3", IE_Pressed, this, &ADustellarProjectCharacter::Skill3);
//		PlayerInputComponent->BindAction("Skill4", IE_Pressed, this, &ADustellarProjectCharacter::Skill4);
//
//	}
//	else
//	{
//		UE_LOG(LogDustellarProject, Error, TEXT("'%s' Failed to find an Enhanced Input component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
//	}
//}
//
////@@좌클릭
//void ADustellarProjectCharacter::LeftAttackPressed()
//{
//	AttackInputStartTime = GetWorld()->GetTimeSeconds(); //@@입력 시작 시간 기록
//	bLeftAttackHold = false; //@@홀드공격 아직 안했음
//
//	//@@ 0.3초 후 hold 공격 발동 예약
//	GetWorld()->GetTimerManager().SetTimer(LeftAttackReleasedTimer, [this]()
//		{
//			if (!bLeftAttackHold)
//			{
//				AttackComp->HandleAttackInput(EAttackInput::LeftHold); //@@ hold 발동
//				AttackComp->ComboCount = 0;
//				bLeftAttackHold = true; //@@ 중복 방지
//			}
//		},
//		AttackComp->HoldThreshold, //@@ 0.3초
//		false);
//}
//
////@@좌클릭떼면
//void ADustellarProjectCharacter::LeftAttackReleased()
//{
//	//@@홀드공격 발동안됬으면 왼공격
//	if (!bLeftAttackHold)
//	{
//		AttackComp->HandleAttackInput(EAttackInput::LeftClick);
//	}
//	//@@타이머초기화
//	GetWorld()->GetTimerManager().ClearTimer(LeftAttackReleasedTimer);
//}
//
////@@우클릭
//void ADustellarProjectCharacter::RightAttackPressed()
//{
//	AttackInputStartTime = GetWorld()->GetTimeSeconds(); //@@ 입력 시작 시간 기록
//	bRightAttackHold = false; //@@ 홀드공격 아직 안했음
//
//	//@@ 0.3초 후 hold 공격 발동 예약
//	GetWorld()->GetTimerManager().SetTimer(RightAttackReleasedTimer, [this]()
//		{
//			if (!bRightAttackHold)
//			{
//				AttackComp->HandleAttackInput(EAttackInput::RightHold); //@@ hold 발동
//				bRightAttackHold = true; //@@ 중복 방지
//			}
//		},
//		AttackComp->HoldThreshold, //@@ 0.3초
//		false);
//}
//
////@@ 우클릭떼면
//void ADustellarProjectCharacter::RightAttackReleased()
//{
//	//@@홀드공격 발동안됬으면 우공격
//	if (!bRightAttackHold)
//	{
//		AttackComp->HandleAttackInput(EAttackInput::RightClick);
//	}
//	//@@타이머초기화
//	GetWorld()->GetTimerManager().ClearTimer(RightAttackReleasedTimer);
//}
////@@#############################################################################
//
//
//
////@@오버랩 발생할때 상대방에게 데미지를 줍니다##########################################
//void ADustellarProjectCharacter::OnHandOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
//{
//	//@@UE_LOG(LogTemp, Warning, TEXT("HandOverlap On"));
//	if (OtherActor && OtherActor != this)
//	{
//		float DamageToApply = 0.f;
//
//		if (OverlappedComponent == RHandCollision)
//		{
//
//			DamageToApply = AttackComp->RightAttackDamage;
//
//		}
//		else if (OverlappedComponent == LHandCollision)
//		{
//
//			DamageToApply = AttackComp->LeftAttackDamage;
//		}
//
//
//		//@@지금 데미지를 줄 수 없거나, 상대가 없거나, 자기 자신이면 그냥 무시하고 함수 종료
//		if (!bCanDamage || !OtherActor || OtherActor == this) return;
//
//		//@@ 2️ 데미지 적용
//		UGameplayStatics::ApplyDamage(
//			OtherActor,      //@@ 데미지 받을 액터
//			DamageToApply,				  //@@ 데미지 값
//			GetController(), //@@ 공격자 컨트롤러
//			this,            //@@ 공격자 액터
//			UDamageType::StaticClass() //@@ 데미지 타입
//		);
//		UE_LOG(LogTemp, Warning, TEXT("Overlap with: %s"), *OtherActor->GetName());
//		if (!bCanDamage) return;
//
//		bCanDamage = false;
//
//		//@@데미지가 중첩으로 들어가서 한프레임 뒤에 데미지를 줄수있게했습니다
//		GetWorld()->GetTimerManager().SetTimerForNextTick([this]()
//			{
//				bCanDamage = true;
//			});
//
//		//@@ 3️ 추가로 피격 효과, 사운드, 파티클 등을 여기서 실행 가능
//		//@@ 예: PlayHitEffect(OtherActor->GetActorLocation());
//	}
//
//	//@@ 4️ bFromSweep, SweepResult 활용 가능
//	//@@ 예: 충돌 위치 확인 후, 피격 방향이나 반동 계산 가능
//	//@@ FVector HitLocation = SweepResult.ImpactPoint;
//}
////@@########################################################################################
//
//
//
//
////@@스킬 입력
//void ADustellarProjectCharacter::Skill1() { AttackComp->UseSkill(0); }
//void ADustellarProjectCharacter::Skill2() { AttackComp->UseSkill(1); }
//void ADustellarProjectCharacter::Skill3() { AttackComp->UseSkill(2); }
//void ADustellarProjectCharacter::Skill4() { AttackComp->UseSkill(3); }
//
//
//void ADustellarProjectCharacter::Move(const FInputActionValue& Value)
//{
//	// input is a Vector2D
//	FVector2D MovementVector = Value.Get<FVector2D>();
//
//	// route the input
//	DoMove(MovementVector.X, MovementVector.Y);
//}
//
//void ADustellarProjectCharacter::Look(const FInputActionValue& Value)
//{
//	// input is a Vector2D
//	FVector2D LookAxisVector = Value.Get<FVector2D>();
//
//	// route the input
//	DoLook(LookAxisVector.X, LookAxisVector.Y);
//}
//
//void ADustellarProjectCharacter::DoMove(float Right, float Forward)
//{
//	if (GetController() != nullptr)
//	{
//		// find out which way is forward
//		const FRotator Rotation = GetController()->GetControlRotation();
//		const FRotator YawRotation(0, Rotation.Yaw, 0);
//
//		// get forward vector
//		const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
//
//		// get right vector 
//		const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
//
//		// add movement 
//		AddMovementInput(ForwardDirection, Forward);
//		AddMovementInput(RightDirection, Right);
//	}
//}
//
//void ADustellarProjectCharacter::DoLook(float Yaw, float Pitch)
//{
//	if (GetController() != nullptr)
//	{
//		// add yaw and pitch input to controller
//		AddControllerYawInput(Yaw);
//		AddControllerPitchInput(Pitch);
//	}
//}
//
//void ADustellarProjectCharacter::DoJumpStart()
//{
//	// signal the character to jump
//	Jump();
//}
//
//void ADustellarProjectCharacter::DoJumpEnd()
//{
//	// signal the character to stop jumping
//	StopJumping();
//}
