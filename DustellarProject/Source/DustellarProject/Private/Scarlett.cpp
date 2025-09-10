// Fill out your copyright notice in the Description page of Project Settings.


#include "Scarlett.h"
#include "ScarlettFSM.h"

// Sets default values
AScarlett::AScarlett()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<USkeletalMesh> tempMesh(TEXT("/Script/Engine.SkeletalMesh'/Game/DevelopersFolder/YJH/YJH_Scarlett/Mannequin/Character_UE5/Meshes/SKM_Manny.SKM_Manny'"));

	if (tempMesh.Succeeded())
	{
		GetMesh()->SetSkeletalMesh(tempMesh.Object);
		GetMesh()->SetRelativeLocationAndRotation(FVector(0.0f, 0.0f, -88.0f), FRotator(0.0f, -90.0f, 0.0f));
		GetMesh()->SetRelativeScale3D(FVector(0.84f));
	}

	fsm = CreateDefaultSubobject<UScarlettFSM>(TEXT("FSM"));

	ConstructorHelpers::FClassFinder<UAnimInstance> tempClass(TEXT("/Script/Engine.AnimBlueprint'/Game/DevelopersFolder/YJH/YJH_BPs/ABP_Scarlett.ABP_Scarlett_C'"));

	if (tempClass.Succeeded())
	{
		GetMesh()->SetAnimInstanceClass(tempClass.Class);
	}

}

// Called when the game starts or when spawned
void AScarlett::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AScarlett::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FVector CharacterLocation = GetActorLocation();

	float attackRadius = 300.0f; // 원하는 반지름 값 (단위: UU)
	FColor attackColor = FColor::Red; // 디버그 원의 색상

	float detectRadius = 800.0f; // 원하는 반지름 값 (단위: UU)
	FColor detectColor = FColor::Cyan; // 디버그 원의 색상

	DrawDebugSphere(GetWorld(), CharacterLocation, attackRadius, 12, attackColor, false, 0.0f, 0, 1.0f);
	DrawDebugSphere(GetWorld(), CharacterLocation, detectRadius, 12, detectColor, false, 0.0f, 0, 1.0f);
}

// Called to bind functionality to input
void AScarlett::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

