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
	//@@�÷��̾� �̵��ӵ�
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category=EVEAnim)
	float speed = 0;

	//@@�÷��̾� ����
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = EVEAnim)
	float direction = 0;

	//@@�������� ���ŵǴ� �Լ�
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	//@@�÷��̾ ���߿� �ִ��� ����
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = EVEAnim)
	bool isInAir = false;
};
