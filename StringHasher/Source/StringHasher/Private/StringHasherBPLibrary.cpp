#include "StringHasherBPLibrary.h"
#include <string>
#include "Misc/SecureHash.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "StringHasher.h"

UStringHasherBPLibrary::UStringHasherBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}


FString UStringHasherBPLibrary::StringToMD5(UPARAM(ref) FString &StringToConvert)
{
	FString Hash(FMD5::HashAnsiString(*(StringToConvert)));
	return Hash;
}

FString UStringHasherBPLibrary::StringToSHA1(UPARAM(ref) FString& StringToConvert)
{
	std::string StdString(TCHAR_TO_UTF8(*StringToConvert));
	FSHA1 HashState;
	HashState.Update((uint8*)StdString.c_str(), StdString.size());
	HashState.Final();
	uint8 Hash[FSHA1::DigestSize];
	HashState.GetHash(Hash);
	return BytesToHex(Hash, FSHA1::DigestSize);
}

bool UStringHasherBPLibrary::LoadFile(FString FileName, FString& FileContent)
{
	return FFileHelper::LoadFileToString(FileContent, *(FPaths::ProjectDir() + FileName));
}

bool UStringHasherBPLibrary::SaveTextFile(FString TextToSave, FString FileName)
{
	return FFileHelper::SaveStringToFile(TextToSave, *(FPaths::ProjectDir() + FileName));
}
