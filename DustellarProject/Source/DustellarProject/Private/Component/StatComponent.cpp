#include "Component/StatComponent.h"


UStatComponent::UStatComponent()
{
	//@@�������� ƽ�� �����Ѵ�
	//@@��������� ƽ�� ������ �׷��� false
	PrimaryComponentTick.bCanEverTick = false;
}


void UStatComponent::BeginPlay()
{
	//@@��ӹ��� �θ�Ŭ������ beginplay ȣ��
	//@@��ӹ�����������
	Super::BeginPlay();

	//@@���۽� ü�� ���� �ƽ��� ����
	CurrentHP = MaxHP;
	CurrentShield = MaxShield;
}

//@@�����������Լ�
void UStatComponent::ApplyDamage(float Value)
{
	//@@����������
	CurrentHP = CurrentHP - Value;
	//@@����ü���� 0 ���Ϸ� ���������ʴ´�
	if (CurrentHP < 0) CurrentHP = 0;
	//@@���� ü���� ����Ѵ�
	UE_LOG(LogTemp, Warning, TEXT("HP: %f"), CurrentHP);
}

//@@ȸ���Լ�
void UStatComponent::RestoreHP(float Value)
{
	//@@��ȸ��
	CurrentHP = CurrentHP + Value;
	//@@����ü���� 100�� �������Ѵ�
	if (CurrentHP > MaxHP) CurrentHP = MaxHP;
	//@@���� ü���� ����Ѵ�
	UE_LOG(LogTemp, Warning, TEXT("HP Restored: %f"), CurrentHP);
}
