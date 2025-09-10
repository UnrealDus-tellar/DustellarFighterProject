// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyCharacter.h"
#include "GameFramework/Controller.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

// Sets default values
AEnemyCharacter::AEnemyCharacter()
{
    // Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEnemyCharacter::BeginPlay()
{
    Super::BeginPlay();

    CurrentHealth = MaxHealth;
}

//@@ 데미지 처리함수
float AEnemyCharacter::TakeDamage(float DamageAmount, FDamageEvent const& DamageEvent,
    AController* EventInstigator, AActor* DamageCauser)
{
    //@@ 1️ 받은 데미지만큼 체력 감소
    CurrentHealth = CurrentHealth - DamageAmount;

    //@@ 2️ 로그 출력 (디버그용)
    UE_LOG(LogTemp, Warning, TEXT("%s took %f damage! Current Health: %f"),
        *GetName(), DamageAmount, CurrentHealth);

    //@@ 3️ 체력이 0 이하이면 죽음 처리
    if (CurrentHealth <= 0.f)
    {
        UE_LOG(LogTemp, Warning, TEXT("%s is dead!"), *GetName());

        //@@ Destroy() 호출하면 액터 제거
        Destroy();
    }
    //@@ 4️ 반환값은 실제 받은 데미지
    return DamageAmount;

}

// Called every frame
void AEnemyCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);

}
