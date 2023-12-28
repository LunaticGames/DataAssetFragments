#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UnifiedItemAsset.generated.h"



UCLASS(Abstract, Blueprintable,BlueprintType, EditInlineNew,CollapseCategories, hidecategories="Fragment", DefaultToInstanced)
class DATAASSETFRAGMENTS_API UItemFragment :public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadOnly, Category = "Fragment")
	FString FragmentLabel;

};

//Fragment Collection

UCLASS(Abstract, Blueprintable, EditInlineNew, DefaultToInstanced)
class DATAASSETFRAGMENTS_API UFragmentCollection : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite,Instanced, Category = "Fragments")
		TArray<TObjectPtr<UItemFragment>> Fragments;

};

//Data Asset Definition

UCLASS()
class DATAASSETFRAGMENTS_API UUnifiedItemAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	

	UPROPERTY(EditAnywhere, Category = "Fragment Collection")
		//UFragmentCollection* TemplateCollection = nullptr;
	TObjectPtr<UFragmentCollection> FragmentCollection;


	UUnifiedItemAsset();

public:

	UFUNCTION()
		const TArray<UItemFragment*>GetAllValidFragments() const;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Fragments")
		TArray<TObjectPtr<UItemFragment>> Fragments;

	UFUNCTION(BlueprintCallable, meta = (DeterminesOutputType = ItemFragmentClass))
		const UItemFragment* FindFragmentByClass(TSubclassOf<UItemFragment> ItemFragmentClass) const;

};





//testing how to convert old assets to this type
UCLASS()
class DATAASSETFRAGMENTS_API UTestConvertAsset : public UUnifiedItemAsset
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Whack")
		FName DisplayName;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Whack")
		int RandomNumber;
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Whack")
		FName something;
};