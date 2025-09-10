// Fill out your copyright notice in the Description page of Project Settings.


#include "ScarlettAnim.h"

#include "Animation/AnimMontage.h"

void UScarlettAnim::PauseCurrentMontage()
{
    if (UAnimMontage* M = GetCurrentActiveMontage())
    {
        Montage_Pause(M);
    }
}

void UScarlettAnim::StopCurrentMontage(float BlendOutTime)
{
    if (UAnimMontage* M = GetCurrentActiveMontage())
    {
        Montage_Stop(BlendOutTime, M);
    }
}

void UScarlettAnim::AnimNotify_EndAttack()
{
    bAttackPlay = false;

    if (ScarlettFSMRef)
    {
        ScarlettFSMRef->OnAttackEnd();
    }
}

void UScarlettAnim::AnimNotify_DieEnd()
{
    bDieDone = true;
}
