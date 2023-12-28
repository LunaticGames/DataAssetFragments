#include "UnifiedItemAsset.h"
#include "Templates/SubclassOf.h"
#include "Containers/Array.h"

UUnifiedItemAsset::UUnifiedItemAsset()
{
	/*UE_LOG(LogTemp, Warning, TEXT("Checking For Fragments"))
	if (FragmentCollection != nullptr) {
		
		for (UItemFragment* fragment : FragmentCollection->Fragments) {
			UE_LOG(LogTemp, Warning, TEXT("Added a fragment"))
			Fragments.Add(fragment);
		}
	}
	else {
		UE_LOG(LogTemp, Warning, TEXT("Template Collection was nullptr"))
	}*/
	
}

const TArray<UItemFragment*> UUnifiedItemAsset::GetAllValidFragments() const
{
	TArray<UItemFragment*> OutFragments;
	for (UItemFragment* defaultFragment : Fragments) {
		if (defaultFragment) {
			OutFragments.Add(defaultFragment);
		}
	}
		if(FragmentCollection != nullptr){
			for (UItemFragment* CollectionFragment : FragmentCollection->Fragments) {
				if (CollectionFragment) {
					OutFragments.Add(CollectionFragment);
				}
			}
		}
		return OutFragments;
	
}


const UItemFragment* UUnifiedItemAsset::FindFragmentByClass(TSubclassOf<UItemFragment> ItemFragmentClass) const
{
	//if we have a valid class to look for
	if (ItemFragmentClass != nullptr) {


		//loop through all traits
		for (UItemFragment* fragment : GetAllValidFragments()) {
			if (fragment && fragment->IsA(ItemFragmentClass))
			{
				return fragment;
			}
		}
	}
	return nullptr;
}
