// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTankPlayerController.h"


ATank * ABattleTankPlayerController::GetControlledTank() const 
{
	return Cast<ATank>(GetPawn());
}

