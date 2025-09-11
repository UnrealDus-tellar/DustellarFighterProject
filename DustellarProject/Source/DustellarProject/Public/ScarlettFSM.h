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
	class AEVE* target; // 타겟 : 플레이어

	UPROPERTY()
	class UScarlettAnim* anim; // 애니메이션 블루프린트 인스턴스

	UPROPERTY()
	class AScarlett* me; // 나

	float SavedYawRate = 0.f;

	void IdleState(); // 대기 상태
	void MoveState(); // 이동 상태
	void AttackState(); // 공격 상태
	void AttackDelayState();
	void HitState(); // 피격 상태
	void DieState(); // 사망 상태

	void OnHitProcess(); // 피격 처리
	void OnAttackEnd();
		
};
