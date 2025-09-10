// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "DustellarProjectCharacter.generated.h"


//@@ ���漱��
class UStatComponent;//@@
class UAttackComponent;//@@
class USpringArmComponent;
class UCameraComponent;
class UInputAction;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

//@@3��Ī�⺻����###################################################################
UCLASS(abstract)
class ADustellarProjectCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Camera boom positioning the camera behind the character */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	USpringArmComponent* CameraBoom;

	/** Follow camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta = (AllowPrivateAccess = "true"))
	UCameraComponent* FollowCamera;
	
protected:

	/** Jump Input Action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* JumpAction;

	/** Move Input Action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* MoveAction;

	/** Look Input Action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* LookAction;

	/** Mouse Look Input Action */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* MouseLookAction;

public:

	/** Constructor */
	ADustellarProjectCharacter();	

	//@@
protected:
	virtual void BeginPlay() override;

protected:

	/** Initialize input action bindings */
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

protected:

	/** Called for movement input */
	void Move(const FInputActionValue& Value);

	/** Called for looking input */
	void Look(const FInputActionValue& Value);

public:

	/** Handles move inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoMove(float Right, float Forward);

	/** Handles look inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoLook(float Yaw, float Pitch);

	/** Handles jump pressed inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoJumpStart();

	/** Handles jump pressed inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoJumpEnd();
	//@@###################################################################################

public:


	//@@������Ʈ ����########################################################
	//@@���� ������Ʈ 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UStatComponent* StatComp;
	//@@���� ������Ʈ 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UAttackComponent* AttackComp;
	//@@##########################################################################

	//@@�տ� ĸ�� �ݶ��̴�######################################################
	//@@������
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	UCapsuleComponent* RHandCollision;
	//@@�޼�
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Combat")
	UCapsuleComponent* LHandCollision;
	//@@##########################################################################

	//@@ Ű ���ε�
	void LeftAttackPressed();
	void LeftAttackReleased();
	void RightAttackPressed();
	void RightAttackReleased();
	// ��ų �Է� 
	void Skill1();
	void Skill2();
	void Skill3();
	void Skill4();
	//@@#####################################

	//@@������ �߻��Լ�######################
	//@@�ݵ�� UFUNCTION() ��ũ�� �ʿ�: AddDynamic�� �̺�Ʈ ���ε��� �� �ʼ�
	UFUNCTION()
	void OnHandOverlap(
		UPrimitiveComponent* OverlappedComponent,  // �̺�Ʈ�� �߻���Ų ������Ʈ, ���⼭�� HandCollision
		AActor* OtherActor,                        // ��ģ ��� ���� (������ ���)
		UPrimitiveComponent* OtherComp,            // ��ģ ����� �ݸ��� ������Ʈ
		int32 OtherBodyIndex,                      // ��ģ ��ü �ε��� (���� �ݸ��� �� ���п�)
		bool bFromSweep,                           // �̵� �� ����(Sweep) �浹 ����
		const FHitResult& SweepResult              // �浹 ���� ����(��ġ, ����, �浹�� ������Ʈ ��)
	);
	//@@##########################################

	//@@�ð�����###############################################
	//@@�Է� ���� �ð� ��� 
	float AttackInputStartTime;

	//@@ ----- Special(����) ���� ó���� ���� Ÿ�̸�/�÷��� -----
//@@ Left/Right ���� Hold �˻�� Ÿ�̸� �ڵ�
	FTimerHandle LeftAttackReleasedTimer;
	FTimerHandle RightAttackReleasedTimer;
	FTimerHandle DamageResetTimer; 

	//@@ Ÿ�̸ӿ� ���� Special�� �̹� ����Ǿ����� üũ(�ߺ�����)
	bool bLeftAttackHold;
	bool bRightAttackHold;


	//@@ Ȧ�� �ߵ� ���� �ð�
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Attack")
	float HoldThreshold = 0.3f;

	bool bCanDamage = true;

	UPROPERTY()
	TSet<AActor*> DamagedActors;
	//@@############################################################





	/** Returns CameraBoom subobject **/
	FORCEINLINE class USpringArmComponent* GetCameraBoom() const { return CameraBoom; }

	/** Returns FollowCamera subobject **/
	FORCEINLINE class UCameraComponent* GetFollowCamera() const { return FollowCamera; }
};

