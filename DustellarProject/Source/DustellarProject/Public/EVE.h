// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "EVE.generated.h"


//@@ 전방선언

class USphereComponent;//@@ 손에 부착하는 스피어
class AttackComponent;
class StatComponent;

//@@ 기본########################################################################################
UCLASS()
class DUSTELLARPROJECT_API AEVE : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEVE();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	//@@####################################################################################################

public:
	//@@스프링암 카메라  물리적인거리를유지하고 주변사물과 충돌되어도 시야가 막히지않음 움직임이 부드럽다
	UPROPERTY(VisibleAnywhere, Category = Caemera)
	class USpringArmComponent* springArmComp;
	//@@tpscamera 캐릭터를 3인칭으로 볼수있다
	UPROPERTY(BlueprintReadOnly, Category = Camera)
	class UCameraComponent* tpsCamComp;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputMappingContext* imc_EVE;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputAction* ia_LookUp;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputAction* ia_Turn;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputAction* ia_Move;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputAction* ia_Jump;





	//@@걷기속도
	UPROPERTY(EditAnywhere, Category = PlayerSetting)
	float walkSpeed = 200;
	//@@달리기속도
	UPROPERTY(EditAnywhere, Category = PlayerSetting)
	float runSpeed = 600;

	//@@이동방향
	FVector direction;

	void Turn(const struct FInputActionValue& inputValue);
	void LookUp(const struct FInputActionValue& inputValue);
	void Move(const struct FInputActionValue& inputValue);
	void InputJump(const struct FInputActionValue& inputValue);

	//@@달리기입력
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputAction* ia_Run;
	//@@달리기 이벤트 처리함수
	void InputRun();


	//@@손에 캡슐 콜라이더######################################################
    //@@오른손
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HandCollision")
	USphereComponent* RHandCollision;
	//@@왼손
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HandCollision")
	USphereComponent* LHandCollision;
	//@@##########################################################################

		//@@컴포넌트 부착########################################################
	//@@스탯 컴포넌트 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UStatComponent* StatComp;
	//@@공격 컴포넌트 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UAttackComponent* AttackComp;
	//@@##########################################################################

	//@@ 키 바인딩############################################################
	void LeftAttackPressed();
	void LeftAttackReleased();
	void RightAttackPressed();
	void RightAttackReleased();
	// 스킬 입력 
	void Skill1();
	void Skill2();
	void Skill3();
	void Skill4();
	//@@#####################################

	//@@오버랩 발생함수######################
	//@@반드시 UFUNCTION() 매크로 필요: AddDynamic로 이벤트 바인딩할 때 필수
	UFUNCTION()
	void OnHandOverlap(
		UPrimitiveComponent* OverlappedComponent,  // 이벤트를 발생시킨 콤포넌트, 여기서는 HandCollision
		AActor* OtherActor,                        // 겹친 상대 액터 (데미지 대상)
		UPrimitiveComponent* OtherComp,            // 겹친 상대의 콜리전 컴포넌트
		int32 OtherBodyIndex,                      // 겹친 몸체 인덱스 (복수 콜리전 시 구분용)
		bool bFromSweep,                           // 이동 중 스윕(Sweep) 충돌 여부
		const FHitResult& SweepResult              // 충돌 세부 정보(위치, 법선, 충돌된 컴포넌트 등)
	);
	//@@##########################################

	//@@시간관련###############################################
	//@@입력 시작 시간 기록 
	float AttackInputStartTime;

	//@@ ----- Special(충전) 공격 처리를 위한 타이머/플래그 -----
//@@ Left/Right 각각 Hold 검사용 타이머 핸들
	FTimerHandle LeftAttackReleasedTimer;
	FTimerHandle RightAttackReleasedTimer;
	FTimerHandle DamageResetTimer;

	//@@ 타이머에 의해 Special이 이미 실행되었는지 체크(중복방지)
	bool bLeftAttackHold;
	bool bRightAttackHold;


	//@@ 홀드 발동 기준 시간
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	float HoldThreshold = 0.3f;

	bool bCanDamage = true;

	UPROPERTY()
	TSet<AActor*> DamagedActors;
	//@@############################################################

};
