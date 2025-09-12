// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "EVEAnim.generated.h"

/**
 * 
 */
UCLASS()
class DUSTELLARPROJECT_API UEVEAnim : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	//@@플레이어 이동속도
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category=EVEAnim)
	float speed = 0;

	//@@플레이어 방향
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = EVEAnim)
	float direction = 0;

	//@@매프레임 갱신되는 함수
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	//@@플레이어가 공중에 있는지 여부
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = EVEAnim)
	bool isInAir = false;
};
