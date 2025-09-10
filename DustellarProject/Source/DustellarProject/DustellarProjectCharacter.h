// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "DustellarProjectCharacter.generated.h"


//@@ 전방선언
class UStatComponent;//@@
class UAttackComponent;//@@
class USpringArmComponent;
class UCameraComponent;
class UInputAction;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

//@@3인칭기본설정###################################################################
UCLASS(abstract)
class ADustellarProjectCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	
protected:

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* LookAction;

	/** Mouse Look Input Action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* MouseLookAction;

public:

	/** Constructor */
	ADustellarProjectCharacter();	

	//@@
protected:
	virtual void BeginPlay() override;

protected:

	/** Initialize input action bindings */
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

public:

	/** Handles move inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoMove(float Right, float Forward);

	/** Handles look inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoLook(float Yaw, float Pitch);

	/** Handles jump pressed inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoJumpStart();

	/** Handles jump pressed inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoJumpEnd();
	//@@###################################################################################

public:


	//@@컴포넌트 부착########################################################
	//@@스탯 컴포넌트 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStatComponent* StatComp;
	//@@공격 컴포넌트 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UAttackComponent* AttackComp;
	//@@##########################################################################

	//@@손에 캡슐 콜라이더######################################################
	//@@오른손
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	UCapsuleComponent* RHandCollision;
	//@@왼손
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	UCapsuleComponent* LHandCollision;
	//@@##########################################################################

	//@@ 키 바인딩
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





	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

