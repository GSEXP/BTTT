// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTankPlayerController.h"

void ABattleTankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	PrintInfo();
}

ATank * ABattleTankPlayerController::GetControlledTank() const 
{
	return Cast<ATank>(GetPawn());
}

void ABattleTankPlayerController::PrintInfo()
{
	ATank * Tank = GetControlledTank();
	FString TankS = Tank->GetName();
	UE_LOG(LogTemp, Warning, TEXT("%s"), *TankS);
}

void ABattleTankPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABattleTankPlayerController::AimTowardsCrosshair() 
{
	if (!GetControlledTank()) 
	{

	}
}

