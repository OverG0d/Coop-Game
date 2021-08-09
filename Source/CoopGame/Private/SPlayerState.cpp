// Fill out your copyright notice in the Description page of Project Settings.

#include "SPlayerState.h"
#include "Kismet/GameplayStatics.h"



void ASPlayerState::AddScore(float ScoreDelta)
{
	SetScore(GetScore() + ScoreDelta);
	for (FConstPlayerControllerIterator It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
	{
		APlayerController* PC = It->Get();
		if (PC && PC->GetPawn())
		{
			APawn* MyPawn = PC->GetPawn();
			
		}
	}
}


