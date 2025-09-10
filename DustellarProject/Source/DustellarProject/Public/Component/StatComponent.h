//@@Hp,Shield,Gauge변수와 관리와 Heal기능
//@@Heal기능의 로직이 적기떄문에 개별 컴포넌트로 빼지않음
#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "StatComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class DUSTELLARPROJECT_API UStatComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	//@@생성자
	UStatComponent();

protected:
	//@@begin play 사용할것
	//@@기본 체력 쉴드 초기화용
	virtual void BeginPlay() override;

	//@@기본값설정
	//@@언리얼 에디터 stat에 표기됨
	//@@최대체력 100
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats")
	float MaxHP = 100.f;
	//@@최대쉴드 100
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Stats")
	float MaxShield = 100.f;

public:
	//@@현재체력
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "stats")
	float CurrentHP;
	//@@현재쉴드
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Stats")
	float CurrentShield;

	//@@데미지적용함수
	UFUNCTION(BlueprintCallable, Category = "Stats")
	void ApplyDamage(float Value);


	//@@체력회복 함수
	UFUNCTION(BlueprintCallable, Category = "Stats")
	void RestoreHP(float Value);

};