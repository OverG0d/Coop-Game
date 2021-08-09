// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SWeapon.h"
#include "SRocketLauncher.generated.h"

/**
 * 
 */
UCLASS()
class COOPGAME_API ASRocketLauncher : public ASWeapon
{
	GENERATED_BODY()
	
public:

protected:

	virtual void Fire() override;

	UPROPERTY(EditDefaultsOnly, Category = "ProjectileClass")
	TSubclassOf<AActor> ProjectileClass;

	

};
