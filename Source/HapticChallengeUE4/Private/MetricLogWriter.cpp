// Fill out your copyright notice in the Description page of Project Settings.

#include "MetricLogWriter.h"


// Sets default values for this component's properties
UMetricLogWriter::UMetricLogWriter()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMetricLogWriter::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMetricLogWriter::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

FString UMetricLogWriter::WriteToLog(FString WriteableString, FString FileName)
{
	FString FilePath = FPaths::ConvertRelativePathToFull(FPaths::GameSavedDir()) + TEXT("/MetricLogs/"+ FileName +".txt");
	FFileHelper::SaveStringToFile(WriteableString, *FilePath, FFileHelper::EEncodingOptions::AutoDetect, &IFileManager::Get(), EFileWrite::FILEWRITE_Append);
	return "";
}
