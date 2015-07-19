// Copyright (c) 2015 - Flaming Octo Avenger

#include "FlamingOctoAvenger.h"
#include "FOA_Character.h"


// Sets default values
AFOA_Character::AFOA_Character()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFOA_Character::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AFOA_Character::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void AFOA_Character::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

