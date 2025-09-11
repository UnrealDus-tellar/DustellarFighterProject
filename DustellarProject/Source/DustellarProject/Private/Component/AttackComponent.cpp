// Fill out your copyright notice in the Description page of Project Settings.


#include "Component/AttackComponent.h"
//@@������� Ÿ�̸Ӹ� �����߱⶧����
#include "TimerManager.h"
#include "EVE.h"
#include "DustellarProjectCharacter.h"
#include "Component/StatComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Actor.h"



// Sets default values for this component's properties
UAttackComponent::UAttackComponent()
{
    // Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
    // off to improve performance if you don't need them.
    //@@ƽ������
    PrimaryComponentTick.bCanEverTick = false;
}


FString AttackInputToString(EAttackInput Input)
{
    switch (Input)
    {
    case EAttackInput::LeftClick:  return TEXT("LeftClick");
    case EAttackInput::RightClick: return TEXT("RightClick");
    case EAttackInput::LeftHold:   return TEXT("LeftHold");
    case EAttackInput::RightHold:  return TEXT("RightHold");
    default: return TEXT("None");
    }
}

void UAttackComponent::BeginPlay()
{//@@�����ڿ��� �ϸ� ������������־ ����÷��̼� ���ְ���
    Super::BeginPlay();
    //@@���۽� �޺�ī���� 0
    
    ComboCount = 0;
    //@@Ÿ�̸� �ʱ�ȭ
    CurrentInputStartTime = 0.f;
    //@@��ų��
    SkillList = { "Skill1", "Skill2", "Skill3", "Skill4" };
    //@@ĳ���� �ҷ�����
    OwnerChar = Cast<ACharacter>(GetOwner());

}
//@@�޺����Ͽ� ���� �ִϸ��̼� ���##################################
void UAttackComponent::HandleAttackInput(EAttackInput InputType)
{
    if (InputType == EAttackInput::None)
    {
        return;
    }
    //@@ ����(����) ���̸� ���� ����
    if (OwnerChar->GetCharacterMovement() && OwnerChar->GetCharacterMovement()->IsFalling())
    {
        UE_LOG(LogTemp, Warning, TEXT("JumpAttack not allowed"));
        return;
    }

    //@@ �޺� ����
    ComboCount++;

    //@@�޺��ʱ�ȭ
    if (ComboCount > MaxCombo)
    {
        ComboCount = 1;
    }


    //@@ 1Ÿ ó��
    // -----------------------------
    if (ComboCount == 1)
    {
        switch (InputType)
        {
        case EAttackInput::LeftClick:     CurrentMontage = Punch_L1_Montage; break;
        case EAttackInput::RightClick:    CurrentMontage = Punch_R1_Montage; break;
        case EAttackInput::LeftHold:      CurrentMontage = Punch_LHold1_Montage; break;
        case EAttackInput::RightHold:     CurrentMontage = Punch_RHold1_Montage; break;
        default: break;
        }
    }
    // -----------------------------
    //@@ 2Ÿ ó�� (���� ���� ���)
    //@@ ex)Punch_L2_LPrev_Montage �̸� �ι�° ���ʰ��ݿ� ���������� �����Դϴ�
    //@@ ex)Punch_R2_LPrev_Hold_Montage �̸� �ι�° ������Ȧ����ݿ� ���������� �����Դϴ�
    // -----------------------------
    else if (ComboCount == 2)
    {
        if (InputType == EAttackInput::LeftClick)
        {
            if (PrevAttack == EAttackInput::LeftClick)
            {
                CurrentMontage = Punch_L2_LPrev_Montage;
            }
            else if (PrevAttack == EAttackInput::RightClick)
            {
                CurrentMontage = Punch_L2_RPrev_Montage;
            }
            else if (PrevAttack == EAttackInput::LeftHold)
            {
                CurrentMontage = Punch_L2_LPrev_Hold_Montage;

            }
            else if (PrevAttack == EAttackInput::RightHold)
            {
                CurrentMontage = Punch_R2_LPrev_Hold_Montage;

            }
        }
        else if (InputType == EAttackInput::RightClick)
        {
            if (PrevAttack == EAttackInput::LeftClick)
            {
                CurrentMontage = Punch_R2_LPrev_Montage;
            }
            else if (PrevAttack == EAttackInput::RightClick)
            {
                CurrentMontage = Punch_R2_RPrev_Montage;
            }
            else if (PrevAttack == EAttackInput::LeftHold)
            {
                CurrentMontage = Punch_L2_LPrev_Hold_Montage;

            }
            else if (PrevAttack == EAttackInput::RightHold)
            {
                CurrentMontage = Punch_R2_LPrev_Hold_Montage;

            }
        }
    }
    // -----------------------------
    //@@ 3Ÿ ó�� (���� ���� ���)
    // -----------------------------
    else if (ComboCount == 3)
    {
        if (InputType == EAttackInput::LeftClick)
        {
            if (PrevAttack == EAttackInput::LeftClick)
            {
                CurrentMontage = Punch_L3_LPrev_Montage;
            }
            else if (PrevAttack == EAttackInput::RightClick)
            {
                CurrentMontage = Punch_L3_RPrev_Montage;
            }
            else if (PrevAttack == EAttackInput::LeftHold)
            {
                CurrentMontage = Punch_L3_LPrev_Hold_Montage;

            }
            else if (PrevAttack == EAttackInput::RightHold)
            {
                CurrentMontage = Punch_R3_LPrev_Hold_Montage;

            }
        }
        else if (InputType == EAttackInput::RightClick)
        {
            if (PrevAttack == EAttackInput::LeftClick)
            {
                CurrentMontage = Punch_R3_LPrev_Montage;
            }
            else if (PrevAttack == EAttackInput::RightClick)
            {
                CurrentMontage = Punch_R3_RPrev_Montage;
            }
            else if (PrevAttack == EAttackInput::LeftHold)
            {
                CurrentMontage = Punch_L3_LPrev_Hold_Montage;

            }
            else if (PrevAttack == EAttackInput::RightHold)
            {
                CurrentMontage = Punch_R3_LPrev_Hold_Montage;

            }
        }
    }
    // -----------------------------
    //@@ 4Ÿ ó�� (������ ����)
    // -----------------------------
    else if (ComboCount == 4)
    {
        if (InputType == EAttackInput::LeftClick)
        {
            if (PrevAttack == EAttackInput::LeftClick)
            {
                CurrentMontage = Punch_L4_LPrev_Montage;

            }
            else if (PrevAttack == EAttackInput::RightClick)
            {
                CurrentMontage = Punch_R4_RPrev_Montage;
            }
            else if (PrevAttack == EAttackInput::LeftHold)
            {
                CurrentMontage = Punch_L4_LPrev_Hold_Montage;

            }
            else if (PrevAttack == EAttackInput::RightHold)
            {
                CurrentMontage = Punch_R4_LPrev_Hold_Montage;

            }
        }
        else if (InputType == EAttackInput::RightClick)
        {
            if (PrevAttack == EAttackInput::LeftClick)
            {
                CurrentMontage = Punch_L4_LPrev_Montage;
            }
            else if (PrevAttack == EAttackInput::RightClick)
            {
                CurrentMontage = Punch_R4_RPrev_Montage;
            }
            else if (PrevAttack == EAttackInput::LeftHold)
            {
                CurrentMontage = Punch_L4_LPrev_Hold_Montage;

            }
            else if (PrevAttack == EAttackInput::RightHold)
            {
                CurrentMontage = Punch_R4_LPrev_Hold_Montage;
            }
        }
    }
    //@@�ִϽ���
    if (CurrentMontage)
    {
        if (CurrentMontage && OwnerChar && OwnerChar->GetMesh() && OwnerChar->GetMesh()->GetAnimInstance())
        {
            OwnerChar->GetMesh()->GetAnimInstance()->Montage_Play(CurrentMontage);
        }
    }

    //@@���ݷα�
    UE_LOG(LogTemp, Warning, TEXT("Combo %d | Current: %s | Prev: %s | Montage: %s"),
        ComboCount,
        *AttackInputToString(InputType),
        *AttackInputToString(PrevAttack),
        CurrentMontage ? *CurrentMontage->GetName() : TEXT("None"));

    //@@ ���� ���� ����
    PrevAttack = InputType;

}
////////#########################################################################################


//@@ī��Ʈ����#########################################################################################
//@@ �⺻�޺��� 0���� �ʱ�ȭ�Ǿ��ְ� �ð��������� �޺��� 0���� �ʱ�ȭ���˴ϴ�

void UAttackComponent::AttackTimer()
{
    if (OwnerChar)
    {//@@������ ���� �ִ� ComboResetTimer Ÿ�̸Ӹ� ����
        OwnerChar->GetWorldTimerManager().ClearTimer(ComboResetTimer);
        //@@���� Ÿ�̸Ӹ� �����ؼ� ComboResetTime�� �Ŀ� ResetCombo() �Լ��� 1ȸ �����Ѵ�
        OwnerChar->GetWorldTimerManager().SetTimer(ComboResetTimer, this, &UAttackComponent::ResetCombo, ComboResetTime, false);
    }
}

//@@�޺� ī��Ʈ�� �����մϴ� 2�ʵ��� �����̾��ٸ� �۵��մϴ�
void UAttackComponent::ResetCombo()
{
    ComboCount = 0;
    PrevAttack = EAttackInput::None;
    UE_LOG(LogTemp, Warning, TEXT("Combo Reset"));
}
//@@############################################################################################################




//@@��ų������մϴ�
void UAttackComponent::UseSkill(int SkillIndex)
{
    if (SkillList.IsValidIndex(SkillIndex))
    {
        UE_LOG(LogTemp, Warning, TEXT("Use Skill: %s"), *SkillList[SkillIndex]);
    }
}
