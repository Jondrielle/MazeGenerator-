// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyRoom.generated.h"

UCLASS()
class PLAYERMOVEMENTTEST_API AMyRoom : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyRoom();

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Floor")
		class UStaticMeshComponent* FloorVisualMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "North Wall")
		class UStaticMeshComponent* NWallVisualMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "South Wall")
		class UStaticMeshComponent* SWallVisualMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "East Wall")
		class UStaticMeshComponent* EWallVisualMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "West Wall")
		class UStaticMeshComponent* WWallVisualMesh;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	void GenerateRoom();

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
