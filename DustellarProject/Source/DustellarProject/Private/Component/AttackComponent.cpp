// Fill out your copyright notice in the Description page of Project Settings.


#include "Component/AttackComponent.h"
//@@헤더에서 타이머를 선언했기때문에
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
    //@@틱사용안함
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
{//@@생성자에서 하면 오류생길수도있어서 비긴플레이서 해주겠음
    Super::BeginPlay();
    //@@시작시 콤보카운터 0
    
    ComboCount = 0;
    //@@타이머 초기화
    CurrentInputStartTime = 0.f;
    //@@스킬셋
    SkillList = { "Skill1", "Skill2", "Skill3", "Skill4" };
    //@@캐릭터 불러오기
    OwnerChar = Cast<ACharacter>(GetOwner());

}
//@@콤보패턴에 따른 애니메이션 재생##################################
void UAttackComponent::HandleAttackInput(EAttackInput InputType)
{
    if (InputType == EAttackInput::None)
    {
        return;
    }
    //@@ 점프(공중) 중이면 공격 금지
    if (OwnerChar->GetCharacterMovement() && OwnerChar->GetCharacterMovement()->IsFalling())
    {
        UE_LOG(LogTemp, Warning, TEXT("JumpAttack not allowed"));
        return;
    }

    //@@ 콤보 증가
    ComboCount++;

    //@@콤보초기화
    if (ComboCount > MaxCombo)
    {
        ComboCount = 1;
    }


    //@@ 1타 처리
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
    //@@ 2타 처리 (직전 공격 고려)
    //@@ ex)Punch_L2_LPrev_Montage 이면 두번째 왼쪽공격에 직전공격은 왼쪽입니다
    //@@ ex)Punch_R2_LPrev_Hold_Montage 이면 두번째 오른쪽홀드공격에 직전공격은 왼쪽입니다
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
    //@@ 3타 처리 (직전 공격 고려)
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
    //@@ 4타 처리 (마지막 공격)
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
    //@@애니실행
    if (CurrentMontage)
    {
        if (CurrentMontage && OwnerChar && OwnerChar->GetMesh() && OwnerChar->GetMesh()->GetAnimInstance())
        {
            OwnerChar->GetMesh()->GetAnimInstance()->Montage_Play(CurrentMontage);
        }
    }

    //@@공격로그
    UE_LOG(LogTemp, Warning, TEXT("Combo %d | Current: %s | Prev: %s | Montage: %s"),
        ComboCount,
        *AttackInputToString(InputType),
        *AttackInputToString(PrevAttack),
        CurrentMontage ? *CurrentMontage->GetName() : TEXT("None"));

    //@@ 직전 공격 갱신
    PrevAttack = InputType;

}
////////#########################################################################################


//@@카운트리셋#########################################################################################
//@@ 기본콤보는 0으로 초기화되어있고 시간이지나도 콤보는 0으로 초기화가됩니다

void UAttackComponent::AttackTimer()
{
    if (OwnerChar)
    {//@@기존에 잡혀 있던 ComboResetTimer 타이머를 제거
        OwnerChar->GetWorldTimerManager().ClearTimer(ComboResetTimer);
        //@@새로 타이머를 설정해서 ComboResetTime초 후에 ResetCombo() 함수를 1회 실행한다
        OwnerChar->GetWorldTimerManager().SetTimer(ComboResetTimer, this, &UAttackComponent::ResetCombo, ComboResetTime, false);
    }
}

//@@콤보 카운트를 리셋합니다 2초동안 동작이없다면 작동합니다
void UAttackComponent::ResetCombo()
{
    ComboCount = 0;
    PrevAttack = EAttackInput::None;
    UE_LOG(LogTemp, Warning, TEXT("Combo Reset"));
}
//@@############################################################################################################




//@@스킬을사용합니다
void UAttackComponent::UseSkill(int SkillIndex)
{
    if (SkillList.IsValidIndex(SkillIndex))
    {
        UE_LOG(LogTemp, Warning, TEXT("Use Skill: %s"), *SkillList[SkillIndex]);
    }
}
