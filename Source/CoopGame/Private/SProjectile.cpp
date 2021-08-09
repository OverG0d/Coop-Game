// Fill out your copyright notice in the Description page of Project Settings.


#include "SProjectile.h"
#include "Net/UnrealNetwork.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ASProjectile::ASProjectile()
{
	
	SetReplicates(true);
}

// Called when the game starts or when spawned
void ASProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

void ASProjectile::Explosion()
{

}

void ASProjectile::ServerFire_Implementation()
{
	Explosion();
}


bool ASProjectile::ServerFire_Validate()
{
	return true;
}


