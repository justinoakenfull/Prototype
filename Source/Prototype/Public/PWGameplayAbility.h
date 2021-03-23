// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "../Prototype.h"
#include "PWGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class PROTOTYPE_API UPWGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	

public:

	UPWGameplayAbility();

	//Abilities with this set will automatically activate when the input is pressed
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "PW | Ability | InputID")
	EPWAbilityInputID AbilityInputID = EPWAbilityInputID::None;
};
