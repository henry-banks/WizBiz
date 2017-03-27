// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "UObject/NoExportTypes.h"
#include "SpellData.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FSpellData_deprecated
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SimpleDisplay)
	FString name;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SimpleDisplay)
		float manaCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, SimpleDisplay)
		TSubclassOf<class ASpell> spellClass;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, SimpleDisplay)
		bool isFocus;
	
	
};
