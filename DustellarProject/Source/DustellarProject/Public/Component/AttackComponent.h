// Fill out your copyright notice in the Description page of Project Settings.
//@@콤보 와 스킬을 관리
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttackComponent.generated.h"



//@@struct FTimerHandle; 언리얼내부에 이미 선언이되어있다


//@@EENUM 하나의 상태만 사용가능 FSM 처럼
UENUM(BlueprintType)
//@@unit8 은 enum의 저장 크기를 1바이트로 고정한다는뜻
enum class EAttackInput : uint8
{
	None,
	LeftClick,
	RightClick,
	LeftHold,
	RightHold
};


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class DUSTELLARPROJECT_API UAttackComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UAttackComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	//@@---------------------------------------변수
	//@@ 콤보횟수 변수
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attack")
	int ComboCount;
	//@@ 최대콤보횟수 변수
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attack")
	int MaxCombo = 4;

	//@@ 최근 공격 타입 (Left/Right/Special) 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attack")
	EAttackInput PrevAttack;
	//@@ 공격 애니메이션
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* CurrentMontage;


	//@@ --- 1타 애니 ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_L1_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_R1_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_LHold1_Montage;   //@@ 1타 왼쪽 홀드
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_RHold1_Montage;   //@@ 1타 오른쪽 홀드

	//@@ --- 2타 애니 ---
	//@@ 직전 입력별/홀드별 구분
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_L2_LPrev_Montage;     //@@ 2타 왼쪽, 직전 왼쪽
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_L2_RPrev_Montage;     //@@ 2타 왼쪽, 직전 오른쪽
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_L2_LPrev_Hold_Montage;//@@ 2타 왼쪽 홀드, 직전 왼쪽
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_L2_RPrev_Hold_Montage;//@@ 2타 왼쪽 홀드, 직전 오른쪽

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_R2_LPrev_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_R2_RPrev_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_R2_LPrev_Hold_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_R2_RPrev_Hold_Montage;

	//@@ --- 3타 애니 ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_L3_LPrev_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_L3_RPrev_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_L3_LPrev_Hold_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_L3_RPrev_Hold_Montage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_R3_LPrev_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_R3_RPrev_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_R3_LPrev_Hold_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_R3_RPrev_Hold_Montage;

	//@@ --- 4타 애니 ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_L4_LPrev_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_L4_RPrev_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_L4_LPrev_Hold_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_L4_RPrev_Hold_Montage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_R4_LPrev_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_R4_RPrev_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_R4_LPrev_Hold_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_R4_RPrev_Hold_Montage;

	//@@캐릭터 불러오기
	ACharacter* OwnerChar;


	//@@ 스킬 목록 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attack")
	TArray<FString> SkillList;

	//@@ 콤보 초기화 타이머 
	FTimerHandle ComboResetTimer;

	//@@ 콤보 입력이 끊기는 시간 (초)
	float ComboResetTime = 2.0f;

	//@@ 홀딩공격 입력 최소 시간 
	float HoldThreshold = 0.3f;

	//@@ 현재 입력 시작 시간 
	float CurrentInputStartTime;

	//@@플레이어 데미지
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	float LeftAttackDamage = 15.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	float RightAttackDamage = 15.f;

	//@@--------------------------------------함수
	//@@공격 애니 함수 
	void HandleAttackInput(EAttackInput InputType);

	//@@타이머함수
	void AttackTimer();

	//@@콤보 초기화 
	UFUNCTION(BlueprintCallable, Category = "Attack")
	void ResetCombo();

	//@@스킬 사용 
	UFUNCTION(BlueprintCallable, Category = "Attack")
	void UseSkill(int SkillIndex);

	//@@------------------------------------------------------
};
