// Copyright (c) 2015 - Flaming Octo Avenger

#pragma once

#include "GameFramework/Character.h"
#include "FOA_Character.generated.h"

UCLASS()
class FLAMINGOCTOAVENGER_API AFOA_Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AFOA_Character();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	
	
};
