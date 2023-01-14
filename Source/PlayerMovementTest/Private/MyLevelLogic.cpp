// Fill out your copyright notice in the Description page of Project Settings.


#include "MyLevelLogic.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AMyLevelLogic::AMyLevelLogic()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyLevelLogic::BeginPlay()
{
	//Super::BeginPlay(); 
	AMyLevelLogic::IsEven();
	mazeWidth = UKismetMathLibrary::RandomInteger(10);
	if (UKismetMathLibrary::Percent_IntInt(mazeWidth, 2) == 0) {
		UE_LOG(LogTemp, Warning, TEXT("EVEN"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("NOT EVEN"));
	}
	UE_LOG(LogTemp, Warning, TEXT("IN LEVEL LOGIC SCRIPT"));
}

void AMyLevelLogic::IsEven()
{
	UE_LOG(LogTemp, Warning, TEXT("INSIDE EVEN METHOD"));
	mazeWidth = UKismetMathLibrary::RandomInteger(10);
	if (UKismetMathLibrary::Percent_IntInt(mazeWidth, 2) == 0) {
		UE_LOG(LogTemp, Warning, TEXT("EVEN"));
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("NOT EVEN"));
	}
}

void AMyLevelLogic::AdjustMazeSize()
{
}

// Called every frame
void AMyLevelLogic::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

