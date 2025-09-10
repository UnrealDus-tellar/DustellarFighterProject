// Fill out your copyright notice in the Description page of Project Settings.
//@@�޺� �� ��ų�� ����
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "AttackComponent.generated.h"



//@@struct FTimerHandle; �𸮾󳻺ο� �̹� �����̵Ǿ��ִ�


//@@EENUM �ϳ��� ���¸� ��밡�� FSM ó��
UENUM(BlueprintType)
//@@unit8 �� enum�� ���� ũ�⸦ 1����Ʈ�� �����Ѵٴ¶�
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
	//@@---------------------------------------����
	//@@ �޺�Ƚ�� ����
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attack")
	int ComboCount;
	//@@ �ִ��޺�Ƚ�� ����
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attack")
	int MaxCombo = 4;

	//@@ �ֱ� ���� Ÿ�� (Left/Right/Special) 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Attack")
	EAttackInput PrevAttack;
	//@@ ���� �ִϸ��̼�
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* CurrentMontage;


	//@@ --- 1Ÿ �ִ� ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_L1_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_R1_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_LHold1_Montage;   //@@ 1Ÿ ���� Ȧ��
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_RHold1_Montage;   //@@ 1Ÿ ������ Ȧ��

	//@@ --- 2Ÿ �ִ� ---
	//@@ ���� �Էº�/Ȧ�庰 ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_L2_LPrev_Montage;     //@@ 2Ÿ ����, ���� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_L2_RPrev_Montage;     //@@ 2Ÿ ����, ���� ������
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_L2_LPrev_Hold_Montage;//@@ 2Ÿ ���� Ȧ��, ���� ����
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_L2_RPrev_Hold_Montage;//@@ 2Ÿ ���� Ȧ��, ���� ������

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_R2_LPrev_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_R2_RPrev_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_R2_LPrev_Hold_Montage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackMontage")
	UAnimMontage* Punch_R2_RPrev_Hold_Montage;

	//@@ --- 3Ÿ �ִ� ---
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

	//@@ --- 4Ÿ �ִ� ---
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

	//@@ĳ���� �ҷ�����
	ACharacter* OwnerChar;


	//@@ ��ų ��� 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Attack")
	TArray<FString> SkillList;

	//@@ �޺� �ʱ�ȭ Ÿ�̸� 
	FTimerHandle ComboResetTimer;

	//@@ �޺� �Է��� ����� �ð� (��)
	float ComboResetTime = 2.0f;

	//@@ Ȧ������ �Է� �ּ� �ð� 
	float HoldThreshold = 0.3f;

	//@@ ���� �Է� ���� �ð� 
	float CurrentInputStartTime;

	//@@�÷��̾� ������
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	float LeftAttackDamage = 15.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	float RightAttackDamage = 15.f;

	//@@--------------------------------------�Լ�
	//@@���� �ִ� �Լ� 
	void HandleAttackInput(EAttackInput InputType);

	//@@Ÿ�̸��Լ�
	void AttackTimer();

	//@@�޺� �ʱ�ȭ 
	UFUNCTION(BlueprintCallable, Category = "Attack")
	void ResetCombo();

	//@@��ų ��� 
	UFUNCTION(BlueprintCallable, Category = "Attack")
	void UseSkill(int SkillIndex);

	//@@------------------------------------------------------
};
