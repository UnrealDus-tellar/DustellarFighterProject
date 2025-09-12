// Fill out your copyright notice in the Description page of Project Settings.


#include "EVEAnim.h"
#include "EVE.h"
#include <GameFramework/CharacterMovementComponent.h>


	
		void UEVEAnim::NativeUpdateAnimation(float DeltaSeconds)
		{
			Super::NativeUpdateAnimation(DeltaSeconds);
			//플레이어의 이동 속도를 가져와 speed에 할당하고 싶다.
			//1. 소유 폰 얻어 오기
			auto ownerPawn = TryGetPawnOwner();
			//2. 플레이어로 캐스팅하기
			auto player = Cast<AEVE>(ownerPawn);
			//캐스팅이 성공했다면
			if (player)
			{ 

			// 이동 벡터 (월드 X,Y)
			FVector Velocity = player->GetVelocity();
			FVector HorizontalVel(Velocity.X, Velocity.Y, 0.f);

			// Speed = 항상 양수
			speed = HorizontalVel.Size(); // 절댓값이라 항상 0 이상

			// Direction = 캐릭터 기준 -180 ~ 180
			if (HorizontalVel.SizeSquared() > 0.f)
			{
				// 캐릭터 기준 로컬 벡터로 변환
				FVector LocalVel = player->GetActorTransform().InverseTransformVectorNoScale(HorizontalVel);

				// -180~180 범위
				direction = FMath::Atan2(LocalVel.Y, LocalVel.X) * 180.f / PI;

				//플레이어가 현재 공중에 있는지 여부를 기억하고 싶다
				auto movement = player->GetCharacterMovement();
				isInAir = movement->IsFalling();
			}
		}
	}
