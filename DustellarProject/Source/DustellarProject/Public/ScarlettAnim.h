// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "ScarlettFSM.h"

#include "ScarlettAnim.generated.h"

/**
 * 
 */
UCLASS()
class DUSTELLARPROJECT_API UScarlettAnim : public UAnimInstance
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = FSM)
	EScarlettState animState;

	UPROPERTY()
	class UScarlettFSM* ScarlettFSMRef;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = FSM)
	bool bAttackPlay = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = FSM)
	bool bDieDone = false;

	UFUNCTION(BlueprintCallable, Category = FSMEvent)
	void PauseCurrentMontage(); // 몽타주 일시정지

	UFUNCTION(BlueprintCallable, Category = FSMEvent)
	void StopCurrentMontage(float BlendOutTime = 0.1f); // 몽타주 정지

	UFUNCTION(BlueprintImplementableEvent, Category = FSMEvent)
	void PlayHitAnim(FName sectionName);

	UFUNCTION(BlueprintImplementableEvent, Category = FSMEvent)
	void PlayAttackAnim(FName sectionName);

	UFUNCTION()
	void AnimNotify_EndAttack();

	UFUNCTION()
	void AnimNotify_DieEnd();
};
