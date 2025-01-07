#include "IntToASCII.h"

void UMyBlueprintFunctions::IntToASCII(uint8 byte, FString& Char, bool& Error, FString& ErrMsg){
    Error = false;
    ErrMsg = TEXT("Successful conversion from int to char.");

    // Invalid UE5 Characters
    if(byte < 9 || (byte > 10 && byte < 32) || byte > 126)
    {
        ErrMsg = FString::Printf(TEXT("Byte integer falls outside range of UE5 compatible characters (9, 10, 32-126). Byte received = %d"), byte);
        Char = TEXT("Err");
        Error = true;
        return;
    }

    if(byte == 9)
        Char = FString::Printf(LINE_TERMINATOR); // asciiChar = '\n';
    else if(byte == 10)
        Char = FString::Printf(TEXT("%c"), '\t');//asciiChar = '\t';
    else
        Char = FString::Printf(TEXT("%c"), char(byte)); // asciiChar = char(byte);
        
    //Char = FString::Printf(TEXT("%c"), asciiChar);
}