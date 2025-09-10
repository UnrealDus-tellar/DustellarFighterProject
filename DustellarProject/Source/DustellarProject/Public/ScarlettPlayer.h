// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ScarlettPlayer.generated.h"

UCLASS()
class DUSTELLARPROJECT_API AScarlettPlayer : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AScarlettPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UPROPERTY(VisibleAnywhere, Category = Camera)
	class USpringArmComponent* springArmComp;

	// UCameraComponent
	UPROPERTY(VisibleAnywhere, BluePrintReadOnly, Category = Camera)
	class UCameraComponent* tpsCamComp;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputMappingContext* imc_Player;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputAction* ia_PlayerMove;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputAction* ia_PlayerTurn;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputAction* ia_PlayerLookUp;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputAction* ia_PlayerJump;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputAction* ia_PlayerAttack;

	FVector direction;

	void PlayerTurn(const struct FInputActionValue& inputValue);
	void PlayerLookUp(const struct FInputActionValue& inputValue);
	void PlayerMove(const struct FInputActionValue& inputValue);
	void PlayerJump(const struct FInputActionValue& inputValue);
	void PlayerAttack(const struct FInputActionValue& inputValue);

};
