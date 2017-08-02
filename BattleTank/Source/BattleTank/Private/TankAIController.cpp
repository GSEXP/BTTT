// Fill out your copyright notice in the Description page of Project Settings.

#include "TankAIController.h"

void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	PrintInfo();
}

ATank * ATankAIController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

APawn * ATankAIController::GetPlayerTank() const
{
	auto * PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn();
	if(!PlayerTank){ return nullptr; }
	return Cast<ATank>(PlayerTank);
}

void ATankAIController::PrintInfo()
{
	UE_LOG(LogTemp, Warning, TEXT("Kill The %s"), *GetPlayerTank()->GetName());
}