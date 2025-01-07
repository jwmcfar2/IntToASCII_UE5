# IntToASCII for UE5
Simple code to allow for byte-to-ascii characters, accessible anywhere in blueprints, for UE5

Example Use in a Level BP:

![image](https://github.com/user-attachments/assets/f485c2bf-784e-4bfc-87d9-bf358b5fa1b0)

![image](https://github.com/user-attachments/assets/bd3d2a2c-e458-4269-967e-bfd2eda3301a)

(This should also be able to be used in C++ by simply calling **void UMyBlueprintFunctions::IntToASCII(uint8 byte, FString& Char, bool& Error, FString& ErrMsg)**, but this is untested and unnecessary since int-to-byte should be simple within C++)
