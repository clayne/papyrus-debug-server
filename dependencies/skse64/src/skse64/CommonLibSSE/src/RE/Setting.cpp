#include "RE/Setting.h"

#include "RE/TESMemoryManager.h"  // free


namespace RE
{
	Setting::~Setting()
	{
		if (IsManaged()) {
			free(name);
		}
		name = 0;
	}


	bool Setting::Unk_01()
	{
		return false;
	}


	bool Setting::IsManaged() const
	{
		return name && name[0] == 'S';
	}


	auto Setting::GetType() const
		-> Type
	{
		if (!name) {
			return Type::kUnknown;
		} else {
			switch (name[0]) {
			case 'b':
				return Type::kBool;
			case 'f':
				return Type::kFloat;
			case 'i':
				return Type::kSignedInteger;
			case 'r':
				return Type::kColor;
			case 'S':
			case 's':
				return Type::kString;
			case 'u':
				return Type::kUnsignedInteger;
			default:
				return Type::kUnknown;
			}
		}
	}


	const char* Setting::GetName() const
	{
		return name ? name : "";
	}


	bool Setting::GetBool() const
	{
		return data.b;
	}


	float Setting::GetFloat() const
	{
		return data.f;
	}


	SInt32 Setting::GetSInt() const
	{
		return data.i;
	}


	Color Setting::GetColor() const
	{
		return data.r;
	}


	const char* Setting::GetString() const
	{
		return data.s ? data.s : "";
	}


	UInt32 Setting::GetUInt() const
	{
		return data.u;
	}
}
