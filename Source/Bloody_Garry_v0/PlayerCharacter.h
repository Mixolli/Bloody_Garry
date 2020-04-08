// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UStaticMeshComponent;

UCLASS()
class BLOODY_GARRY_V0_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();
<<<<<<< Updated upstream
	
	UPROPERTY(VisibleAnywere, BlueprintReadOnly, Category = "Camera")
	USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnywere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* CameraComp;

	UPROPERTY(VisibleAnywere, BlueprintReadOnly, Category = "Player")
	UStaticMeshComponent* MeshComp;
=======

	UPROPERTY(VisibleAnywere, BlueprintReadOnly, Category = "Camera")
		USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnywere, BlueprintReadOnly, Category = "Camera")
		UCameraComponent* CameraComp;

	UPROPERTY(VisibleAnywere, BlueprintReadOnly, Category = "Player")
		UStaticMeshComponent* MeshComp;
>>>>>>> Stashed changes



protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveUp(float Value);
	void MoveRight(float Value);


<<<<<<< Updated upstream
public:	
=======
public:
>>>>>>> Stashed changes

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
