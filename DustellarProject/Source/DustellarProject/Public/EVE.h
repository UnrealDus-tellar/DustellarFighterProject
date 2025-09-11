// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EVE.generated.h"


//@@ 전방선언
//class UStatComponent;//@@
//class UAttackComponent;//@@
class USphereComponent;//@@ 손에 부착하는 스피어

//@@ 기본########################################################################################
UCLASS()
class DUSTELLARPROJECT_API AEVE : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEVE();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	//@@####################################################################################################

public:
	//@@스프링암 카메라  물리적인거리를유지하고 주변사물과 충돌되어도 시야가 막히지않음 움직임이 부드럽다
	UPROPERTY(VisibleAnywhere, Category = Caemera)
	class USpringArmComponent* springArmComp;
	//@@tpscamera 캐릭터를 3인칭으로 볼수있다
	UPROPERTY(BlueprintReadOnly, Category = Camera)
	class UCameraComponent* tpsCamComp;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputMappingContext* imc_TPS;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputAction* ia_LookUp;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputAction* ia_Turn;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputAction* ia_Move;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputAction* ia_Jump;

	//@@걷기속도
	UPROPERTY(EditAnywhere, Category = PlayerSetting)
	float walkSpeed = 200;
	//@@달리기속도
	UPROPERTY(EditAnywhere, Category = PlayerSetting)
	float runSpeed = 600;

	//@@이동방향
	FVector direction;

	void Turn(const struct FInputActionValue& inputValue);
	void LookUp(const struct FInputActionValue& inputValue);
	void Move(const struct FInputActionValue& inputValue);
	void InputJump(const struct FInputActionValue& inputValue);

	//@@달리기입력
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputAction* ia_Run;
	//@@달리기 이벤트 처리함수
	void InputRun();


	//@@손에 캡슐 콜라이더######################################################
    //@@오른손
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HandCollision")
	USphereComponent* RHandCollision;
	//@@왼손
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HandCollision")
	USphereComponent* LHandCollision;
	//@@##########################################################################
};
