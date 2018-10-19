// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "GameFramework/Actor.h"
#include "UnrealNetwork.h"
#include "MyObject.generated.h"

UCLASS()
class FIT2097ASSIGNMENT2_API AMyObject : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyObject();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:	
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Object")
	bool IsObject;

	FString GetObjectName();

	FString GetObjectDisplayText();

	UFUNCTION(BlueprintPure, Category = "Object")
	bool IsActive();

	UFUNCTION(BlueprintCallable, Category = "Object")
	void SetActive(bool NewObjectState);

	UFUNCTION(BlueprintNativeEvent, Category = "Object")
	void WasToggled();
	virtual void WasToggled_Implementation();

protected:
	UPROPERTY(Replicated)
	bool bIsActive;

	UFUNCTION()
	virtual void OnRep_IsActive();
};
