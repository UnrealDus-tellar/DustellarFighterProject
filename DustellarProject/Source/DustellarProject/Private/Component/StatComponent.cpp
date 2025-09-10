#include "Component/StatComponent.h"


UStatComponent::UStatComponent()
{
	//@@매프레임 틱을 실행한다
	//@@헤더파일의 틱을 삭제함 그래서 false
	PrimaryComponentTick.bCanEverTick = false;
}


void UStatComponent::BeginPlay()
{
	//@@상속받은 부모클래스의 beginplay 호출
	//@@상속받지않을것임
	Super::BeginPlay();

	//@@시작시 체력 쉴드 맥스로 세팅
	CurrentHP = MaxHP;
	CurrentShield = MaxShield;
}

//@@데미지적용함수
void UStatComponent::ApplyDamage(float Value)
{
	//@@데미지적용
	CurrentHP = CurrentHP - Value;
	//@@현재체력은 0 이하로 떨어지지않는다
	if (CurrentHP < 0) CurrentHP = 0;
	//@@현재 체력을 출력한다
	UE_LOG(LogTemp, Warning, TEXT("HP: %f"), CurrentHP);
}

//@@회복함수
void UStatComponent::RestoreHP(float Value)
{
	//@@피회복
	CurrentHP = CurrentHP + Value;
	//@@현재체력은 100을 넘지못한다
	if (CurrentHP > MaxHP) CurrentHP = MaxHP;
	//@@현재 체력을 출력한다
	UE_LOG(LogTemp, Warning, TEXT("HP Restored: %f"), CurrentHP);
}
