#pragma once


namespace RE
{
	namespace Scaleform
	{
		namespace GFx
		{
			enum class TagType : UInt32
			{
				kEnd = 0,
				kEndFrame = 1,
				kDefineShape = 2,
				kPlaceObject = 4,
				kRemoveObject = 5,
				kDefineBitsJpeg = 6,
				kButtonCharacter = 7,
				kJpegTables = 8,
				kSetBackgroundColor = 9,
				kDefineFont = 10,
				kDefineText = 11,
				kDoAction = 12,
				kDefineFontInfo = 13,
				kDefineSound = 14,
				kStartSound = 15,
				kButtonSound = 17,
				kSoundStreamHead = 18,
				kSoundStreamBlock = 19,
				kDefineBitsLossless = 20,
				kDefineBitsJpeg2 = 21,
				kDefineShape2 = 22,
				kProtect = 24,
				kPlaceObject2 = 26,
				kRemoveObject2 = 28,
				kDefineShape3 = 32,
				kDefineText2 = 33,
				kDefineEditText = 37,
				kButtonCharacter2 = 34,
				kDefineBitsJpeg3 = 35,
				kDefineBitsLossless2 = 36,
				kSprite = 39,
				kFrameLabel = 43,
				kSoundStreamHead2 = 45,
				kDefineShapeMorph = 46,
				kDefineFont2 = 48,
				kExport = 56,
				kImport = 57,
				kDoInitAction = 59,
				kDefineVideoStream = 60,
				kDefineFontInfo2 = 62,
				kDebugID = 63,
				kSetTabIndex = 66,
				kFileAttributes = 69,
				kPlaceObject3 = 70,
				kImport2 = 71,
				kCSMTextSettings = 74,
				kDefineFont3 = 75,
				kSymbolClass = 76,
				kMetadata = 77,
				kDefineScale9Grid = 78,
				kDoAbc = 82,
				kDefineShape4 = 83,
				kDefineShapeMorph2 = 84,
				kDefineSceneAndFrameLabelData = 86,
				kDefineBinaryData = 87,
				kDefineFontName = 88,
				kStartSound2 = 89,
				kDefineBitsJpeg4 = 90,
				kDefineFont4 = 91,

				kSWF_TagTableEnd,

				kExporterInfo = 1000,
				kFontTextureInfo = 1002,
				kDefineExternalGradient = 1003,
				kDefineGradientMap = 1004,
				kDefineCompactedFont = 1005,
				kDefineExternalSound = 1006,
				kDefineExternalStreamSound = 1007,
				kDefineSubImage = 1008,
				kDefineExternalImage = 1009,

				kGFX_TagTableEnd,
				kGFX_TagTableBegin = 1000,
			};
		}
	}
}
