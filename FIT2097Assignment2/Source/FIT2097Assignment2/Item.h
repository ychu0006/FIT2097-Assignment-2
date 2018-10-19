// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "MyObject.h"
#include "Item.generated.h"

/**
 * 
 */

UENUM(BluePrintType)
enum class EItemType : uint8 {
	HEALTH UMETA(DisplayName="Health"),
	KEY UMETA(DisplayName = "Key"),
	FUSE UMETA(DisplayName = "Fuse")
};

UCLASS()
class FIT2097ASSIGNMENT2_API AItem : public AMyObject
{
	GENERATED_BODY()

	public:
		AItem();

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Enum)
		EItemType ItemType;

		UFUNCTION(BlueprintGetter)
		EItemType GetType();

		UFUNCTION(BlueprintSetter)
		void SetType(EItemType NewItemType);
};