// Fill out your copyright notice in the Description page of Project Settings.


#include "ShooterCharacter.h"
#include "GameFramework/SpringArmComponent.h"

AShooterCharacter::AShooterCharacter()
{
 	
	PrimaryActorTick.bCanEverTick = true;

	//Create a camera boom (pulls in towards the character if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.f; // the camera follows at this distance behind the character
	CameraBoom->bUsePawnControlRotation = true; // rotate the arm based on the controller
}

void AShooterCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}


void AShooterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AShooterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

