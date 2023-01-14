// Fill out your copyright notice in the Description page of Project Settings.


#include "MyRoom.h"

// Sets default values
AMyRoom::AMyRoom()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//FLOOR
	FloorVisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Floor"));
	RootComponent = FloorVisualMesh;

	//NORTH WALL
	NWallVisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("NorthWall"));
	NWallVisualMesh->SetupAttachment(RootComponent);

	//SOUTH WALL
	SWallVisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SouthWall"));
	SWallVisualMesh->SetupAttachment(RootComponent);

	//EAST WALL
	EWallVisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("EastWall"));
	EWallVisualMesh->SetupAttachment(RootComponent);

	//WEST WALL
	WWallVisualMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WestWall"));
	WWallVisualMesh->SetupAttachment(RootComponent);
}

// Called when the game starts or when spawned
void AMyRoom::BeginPlay()
{
	Super::BeginPlay();
	
}

void AMyRoom::GenerateRoom()
{
}

// Called every frame
void AMyRoom::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}



