// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ScarlettFSM.generated.h"

UENUM(BlueprintType)
enum class EScarlettState : uint8
{
	Idle,
	Move,
	Attack,
	AttackDelay,
	Hit,
	Die,
};

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class DUSTELLARPROJECT_API UScarlettFSM : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UScarlettFSM();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(VIsibleAnywhere, BlueprintReadOnly, Category = FSM);
	EScarlettState ScarlettState = EScarlettState::Idle;

	float currentTime = 0.0f;
	float attackDelayTime = 0.1f;
	float damageDelayTime = 0.5f;
	float dieSpeed = 50.0f;

	int32 LastAttackIndex = -1;

	bool bIsAttacking = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = FSM)
	int32 hp = 3;

	UPROPERTY(EditAnywhere, Category = FSM)
	float detectRange = 800.0f;

	UPROPERTY(EditAnywhere, Category = FSM)
	float attackRange = 300.0f;

	UPROPERTY(VisibleAnywhere, Category = FSM)
	class AEVE* target; // Ÿ�� : �÷��̾�

	UPROPERTY()
	class UScarlettAnim* anim; // �ִϸ��̼� �������Ʈ �ν��Ͻ�

	UPROPERTY()
	class AScarlett* me; // ��

	float SavedYawRate = 0.f;

	void IdleState(); // ��� ����
	void MoveState(); // �̵� ����
	void AttackState(); // ���� ����
	void AttackDelayState();
	void HitState(); // �ǰ� ����
	void DieState(); // ��� ����

	void OnHitProcess(); // �ǰ� ó��
	void OnAttackEnd();
		
};
