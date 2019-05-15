// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "FileHelper.h"
#include "Paths.h"
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MetricLogWriter.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class HAPTICCHALLENGEUE4_API UMetricLogWriter : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMetricLogWriter();

	UFUNCTION(BlueprintCallable)
		FString WriteToLog(FString WriteableString, FString FileName);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
