//@@Hp,Shield,Gauge������ ������ Heal���
//@@Heal����� ������ ���⋚���� ���� ������Ʈ�� ��������
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class DUSTELLARPROJECT_API UStatComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	//@@������
	UStatComponent();

protected:
	//@@begin play ����Ұ�
	//@@�⺻ ü�� ���� �ʱ�ȭ��
	virtual void BeginPlay() override;

	//@@�⺻������
	//@@�𸮾� ������ stat�� ǥ���
	//@@�ִ�ü�� 100
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats")
	float MaxHP = 100.f;
	//@@�ִ뽯�� 100
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats")
	float MaxShield = 100.f;

public:
	//@@����ü��
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "stats")
	float CurrentHP;
	//@@���罯��
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
	float CurrentShield;

	//@@�����������Լ�
	UFUNCTION(BlueprintCallable, Category = "Stats")
	void ApplyDamage(float Value);


	//@@ü��ȸ�� �Լ�
	UFUNCTION(BlueprintCallable, Category = "Stats")
	void RestoreHP(float Value);

};