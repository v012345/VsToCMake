#ifndef _SYSTEM_CONVERT_H_
#define _SYSTEM_CONVERT_H_

#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Char.h"
#include "Aspose.Cells.Systems/Byte.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/UInt32.h"
#include "Aspose.Cells.Systems/Int16.h"
#include "Aspose.Cells.Systems/Int64.h"
#include "Aspose.Cells.Systems/Double.h"
#include "Aspose.Cells.Systems/Single.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/DateTime.h"
#include "Aspose.Cells.Systems/TypeDefBString.h"
#include "Aspose.Cells.Systems/Base64FormattingOptions.h"
#include "Aspose.Cells.Systems/Globalization/NumberFormatInfo.h"
#include "Aspose.Cells.Systems/Globalization/CultureInfo.h"
namespace Aspose {
	namespace Cells {
		namespace Systems {
			class ASPOSE_CELLS_API Convert 
			{
			private:
				static Char base64Table[65];

				static int ToBase64_CalculateAndValidateOutputLength(int inputLength, bool insertLineBreaks);
				static int ConvertToBase64Array(Char* outChars, Byte* inData, int offset, int length, bool insertLineBreaks);
				static intrusive_ptr<BString> FromBase64CharPtr(Char* inputPtr, int inputLength);
				static int FromBase64_ComputeResultLength(Char* inputPtr, int inputLength);
				static int FromBase64_Decode(Char* startInputPtr, int inputLength, Byte* startDestPtr, int destLength);

			public:
				static Int32 ToInt32(bool value);
				static Int32 ToInt32(Char value);
				static Int32 ToInt32(Double value);
				static Int32 ToInt32(StringPtr value);
				static Int32 ToInt32(StringPtr value, Int32 fromBase);
				static Int32 ToInt32(ObjectPtr value);
				static Int32 ToInt32(Int32 value);
				static Int16 ToInt16(bool value);
				static Int16 ToInt16(Char value);
				static Int16 ToInt16(Double value);
				static Int16 ToInt16(Int32 value);
				static Int16 ToInt16(StringPtr value);
				static Int16 ToInt16(ObjectPtr value);
				static UInt16 ToUInt16(StringPtr value);
				static UInt16 ToUInt16(StringPtr value, Int32 fromBase);
				static Byte ToByte(bool value);
				static Byte ToByte(Char value);
				static Byte ToByte(Double value);
				static Byte ToByte(Int32 value);
				static Int64 ToInt64(bool value);
				static Int64 ToInt64(Char value);
				static Int64 ToInt64(Double value);
				static Int64 ToInt64(StringPtr value);
				static Int64 ToInt64(ObjectPtr value);
				static Int64 ToInt64(StringPtr value, Int32 fromBase);
				static UInt32 ToUInt32(bool value);
				static UInt32 ToUInt32(Char value);
				static UInt32 ToUInt32(Double value);
				static UInt32 ToUInt32(StringPtr value);
				static UInt32 ToUInt32(ObjectPtr value);
				static Double ToDouble(bool value);
				static Double ToDouble(Char value);
				static Double ToDouble(Int32 value);
				static Double ToDouble(Single value);
				static Double ToDouble(StringPtr value);
				static Double ToDouble(StringPtr value, intrusive_ptr<NumberFormatInfo> provider);
				static Double ToDouble(ObjectPtr value);
				static Single ToSingle(ObjectPtr value);
				static Single ToSingle(Int32 value);
				static Single ToSingle(double value);
				static Single ToSingle(StringPtr value, intrusive_ptr<CultureInfo> provider);

				static StringPtr ToString(bool value);
				static StringPtr ToString(Char value);
				static StringPtr ToString(Double value);
				static StringPtr ToString(Int32 value);
				static StringPtr ToString(Int64 value);
				static StringPtr ToString(Int64 value, int toBase);
				static StringPtr ToString(ObjectPtr value);
				static StringPtr ToString(StringPtr value,  CultureInfoPtr provider);

				static StringPtr ToString(Single value, CultureInfoPtr provider);

				static DateTimePtr ToDateTime(StringPtr value);
				static DateTimePtr ToDateTime(ObjectPtr value);
				static Char ToChar(StringPtr value);

				static StringPtr ToBase64String(intrusive_ptr<BString> inArray);
				static StringPtr ToBase64String(intrusive_ptr<BString> inArray, Base64FormattingOptions options);
				static StringPtr ToBase64String(intrusive_ptr<BString> inArray, Int32 offset, Int32 length);
				static StringPtr ToBase64String(intrusive_ptr<BString> inArray, Int32 offset, Int32 length, Base64FormattingOptions options);
				static intrusive_ptr<BString> FromBase64String(StringPtr s);
				static intrusive_ptr<BString> FromBase64CharArray(intrusive_ptr<Array1D<Char>> startInputPtr, int offset, int length);

			};
		}
	}
}
#endif//_SYSTEM_CONVERT_H_