#pragma once

#include "RE/Memory.h"  // TES_HEAP_REDEFINE_NEW


namespace RE
{
	struct BSIntrusiveRefCounted
	{
	public:
		template <class T> friend struct BSTSmartPointerIntrusiveRefCount;


		BSIntrusiveRefCounted();

		SInt32	IncRefCount();
		SInt32	DecRefCount();

		FO_HEAP_REDEFINE_NEW();


		// members
		volatile SInt32 _refCount;	// 0
	};
	STATIC_ASSERT(sizeof(BSIntrusiveRefCounted) == 0x4);
}
