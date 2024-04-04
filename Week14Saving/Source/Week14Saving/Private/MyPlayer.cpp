// Fill out your copyright notice in the Description page of Project Settings.


#include "MyPlayer.h"
#include "Components/InputComponent.h"
#include "EnhancedInputComponent.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "EnhancedInputSubsystems.h"
#include <EnhancedInputComponent.h>
#include "MainSaveGame.h"
#include "Kismet/GameplayStatics.h"


// Sets default values
AMyPlayer::AMyPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	bmove = false;
	saveObj = Cast<UMainSaveGame>(UGameplayStatics::CreateSaveGameObject(UMainSaveGame::StaticClass()));


}

// Called when the game starts or when spawned
void AMyPlayer::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Display, TEXT("SubSystem OK"));
	APlayerController* PlayerController = Cast<APlayerController>(Controller);
	if (PlayerController) {
		UE_LOG(LogTemp, Display, TEXT("Player controller OK"));
		UEnhancedInputLocalPlayerSubsystem* subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer());
		if (subsystem) {
			subsystem->AddMappingContext(InputMapping, 0);
		}
		UE_LOG(LogTemp, Display, TEXT("SubSystem OK"));

	}
	
}

// Called every frame
void AMyPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (bmove) {
		FVector newLoc = GetActorLocation() + (GetActorForwardVector() * 20 * DeltaTime);
		SetActorLocation(newLoc);
	}

}

// Called to bind functionality to input
void AMyPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);


	if (UEnhancedInputComponent* inputsys = Cast<UEnhancedInputComponent>(PlayerInputComponent)) 
    {
        // Bind input actions
		inputsys->BindAction(IA_Move, ETriggerEvent::Triggered, this, &AMyPlayer::inputMove);
		inputsys->BindAction(IA_Save, ETriggerEvent::Triggered, this, &AMyPlayer::inputSave);
		inputsys->BindAction(IA_Load, ETriggerEvent::Triggered, this, &AMyPlayer::inputLoad);
           GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Input setup successful"));
    } 
	else {
		UE_LOG(LogTemp, Display, TEXT("Cast erro"));

	}

}

void AMyPlayer::inputMove(const FInputActionValue& val)
{
	const float moveVal = val.Get<float>();
	if (moveVal != 0) {
		GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White, TEXT("Move "));

		bmove = true;
	}
	else {
		bmove = false;
	}

}

void AMyPlayer::inputLoad(const FInputActionValue& val)
{
	const bool LoadVal= val.Get<bool>();

	if (saveObj) {
		SetActorLocation(saveObj->PlayerLocation);
		SetActorRotation(saveObj->PlayerRotation);
	}
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White, TEXT("Data Loaded"));


}

void AMyPlayer::inputSave(const FInputActionValue& val)
{
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White, TEXT("Saved "));
	//UMainSaveGame* saveObj = Cast<UMainSaveGame>(UGameplayStatics::CreateSaveGameObject(UMainSaveGame::StaticClass()));
	saveObj->PlayerLocation = GetActorLocation();
	saveObj->PlayerRotation = GetActorRotation();
	UGameplayStatics::SaveGameToSlot(saveObj, TEXT("Slot1"), 0);
	GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::White, TEXT("Data saved ... "));

}

