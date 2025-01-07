#pragma once
#include "CoreMinimal.h"
#include "IntToASCII.generated.h"

UCLASS()
class UMyBlueprintFunctions : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, Category="ASCII Convert")
    static void IntToASCII(uint8 byte, FString& Char, bool& Error, FString& ErrMsg);
};