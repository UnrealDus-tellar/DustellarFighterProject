// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

#include "EVE.generated.h"


//@@ ���漱��

class USphereComponent;//@@ �տ� �����ϴ� ���Ǿ�
class AttackComponent;
class StatComponent;

//@@ �⺻########################################################################################
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
	//@@�������� ī�޶�  �������ΰŸ��������ϰ� �ֺ��繰�� �浹�Ǿ �þ߰� ���������� �������� �ε巴��
	UPROPERTY(VisibleAnywhere, Category = Caemera)
	class USpringArmComponent* springArmComp;
	//@@tpscamera ĳ���͸� 3��Ī���� �����ִ�
	UPROPERTY(BlueprintReadOnly, Category = Camera)
	class UCameraComponent* tpsCamComp;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputMappingContext* imc_EVE;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputAction* ia_LookUp;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputAction* ia_Turn;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputAction* ia_Move;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputAction* ia_Jump;





	//@@�ȱ�ӵ�
	UPROPERTY(EditAnywhere, Category = PlayerSetting)
	float walkSpeed = 200;
	//@@�޸���ӵ�
	UPROPERTY(EditAnywhere, Category = PlayerSetting)
	float runSpeed = 600;

	//@@�̵�����
	FVector direction;

	void Turn(const struct FInputActionValue& inputValue);
	void LookUp(const struct FInputActionValue& inputValue);
	void Move(const struct FInputActionValue& inputValue);
	void InputJump(const struct FInputActionValue& inputValue);

	//@@�޸����Է�
	UPROPERTY(EditDefaultsOnly, Category = "Input")
	class UInputAction* ia_Run;
	//@@�޸��� �̺�Ʈ ó���Լ�
	void InputRun();


	//@@�տ� ĸ�� �ݶ��̴�######################################################
    //@@������
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HandCollision")
	USphereComponent* RHandCollision;
	//@@�޼�
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HandCollision")
	USphereComponent* LHandCollision;
	//@@##########################################################################

		//@@������Ʈ ����########################################################
	//@@���� ������Ʈ 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UStatComponent* StatComp;
	//@@���� ������Ʈ 
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	class UAttackComponent* AttackComp;
	//@@##########################################################################

	//@@ Ű ���ε�############################################################
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

};
