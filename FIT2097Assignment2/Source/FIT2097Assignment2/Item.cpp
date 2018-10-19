// Fill out your copyright notice in the Description page of Project Settings.

#include "Item.h"

AItem::AItem() {
	bReplicateMovement = true;
}

EItemType AItem::GetType() {
	return ItemType;
}

void AItem::SetType(EItemType NewItemType) {
	ItemType = NewItemType;
}







