// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"
#include "MyLevelLogic.generated.h"

UCLASS()
class PLAYERMOVEMENTTEST_API AMyLevelLogic : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyLevelLogic();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 mazeWidth;

	void IsEven();
	void AdjustMazeSize();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
