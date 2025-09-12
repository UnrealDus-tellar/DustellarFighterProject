// Fill out your copyright notice in the Description page of Project Settings.


#include "EVEAnim.h"
#include "EVE.h"


void UEVEAnim::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	//�÷��̾��� �̵� �ӵ��� ������ speed�� �Ҵ��ϰ� �ʹ�.
	//1. ���� �� ��� ����
	auto ownerPawn = TryGetPawnOwner();
	//2. �÷��̾�� ĳ�����ϱ�
	auto player = Cast<AEVE>(ownerPawn);
	//ĳ������ �����ߴٸ�
	if (player)
	{
		//3.�̵��ӵ��� �ʿ�
		FVector velocity = player->GetVelocity();
		//4.�÷��̾��� ���� ���Ͱ� �ʿ�
		FVector forwardVector = player->GetActorForwardVector();
		//5.speed�� ��(����) �Ҵ��ϱ�
		speed = FVector::DotProduct(forwardVector, velocity);
	}
	//APawn* OwnerPawn = TryGetPawnOwner();
	//if (!OwnerPawn) return;

	//// �ӵ� ���
	//FVector Velocity = OwnerPawn->GetVelocity();
	//speed = Velocity.Size2D();
}
