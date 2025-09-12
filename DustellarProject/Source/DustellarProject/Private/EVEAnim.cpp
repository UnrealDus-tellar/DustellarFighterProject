// Fill out your copyright notice in the Description page of Project Settings.


#include "EVEAnim.h"
#include "EVE.h"
#include <GameFramework/CharacterMovementComponent.h>


	
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

			// �̵� ���� (���� X,Y)
			FVector Velocity = player->GetVelocity();
			FVector HorizontalVel(Velocity.X, Velocity.Y, 0.f);

			// Speed = �׻� ���
			speed = HorizontalVel.Size(); // �����̶� �׻� 0 �̻�

			// Direction = ĳ���� ���� -180 ~ 180
			if (HorizontalVel.SizeSquared() > 0.f)
			{
				// ĳ���� ���� ���� ���ͷ� ��ȯ
				FVector LocalVel = player->GetActorTransform().InverseTransformVectorNoScale(HorizontalVel);

				// -180~180 ����
				direction = FMath::Atan2(LocalVel.Y, LocalVel.X) * 180.f / PI;

				//�÷��̾ ���� ���߿� �ִ��� ���θ� ����ϰ� �ʹ�
				auto movement = player->GetCharacterMovement();
				isInAir = movement->IsFalling();
			}
		}
	}
