// Fill out your copyright notice in the Description page of Project Settings.

#include "MyObject.h"
#include "Net/UnrealNetwork.h"


// Sets default values
AMyObject::AMyObject()
{
	bReplicates = true;
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	if (Role == ROLE_Authority) {
		bIsActive = true;
	}

}

// Called when the game starts or when spawned
void AMyObject::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyObject::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FString AMyObject::GetObjectName() {
	return this->GetName();
}

FString AMyObject::GetObjectDisplayText() {
	return "This is a " + GetObjectName();
}

void AMyObject::OnRep_IsActive() {

}

bool AMyObject::IsActive() {
	return bIsActive;
}

void AMyObject::SetActive(bool NewObjectState) {
	if (Role == ROLE_Authority) {
		bIsActive = NewObjectState;
	}
}

void AMyObject::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AMyObject, bIsActive);
}

void AMyObject::WasToggled_Implementation() {
	
}




