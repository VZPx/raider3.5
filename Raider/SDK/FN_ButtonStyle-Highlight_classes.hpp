#pragma once

// Fortnite (3.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ButtonStyle-Highlight.ButtonStyle-Highlight_C
// 0x0000 (0x04F0 - 0x04F0)
class UButtonStyle_Highlight_C : public UButtonStyle_MediumTransparentNoCues_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ButtonStyle-Highlight.ButtonStyle-Highlight_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif