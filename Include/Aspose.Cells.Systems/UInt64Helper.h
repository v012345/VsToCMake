#ifndef _SYSTEM_UINT64HELPER_H_
#define _SYSTEM_UINT64HELPER_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/UInt64.h"
#include "Aspose.Cells.Systems/IFormatProvider.h"
#include "Aspose.Cells.Systems/Globalization/NumberStyles.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {
			class ASPOSE_CELLS_API UInt64Helper {
			public:
				static const UInt64 MaxValue;
				static const UInt64 MinValue;
				
				static UInt64 Parse(StringPtr s);
				static UInt64 Parse(StringPtr s, intrusive_ptr<IFormatProvider> provider);
				static UInt64 Parse(StringPtr s, Globalization::NumberStyles style);
				static UInt64 Parse(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<IFormatProvider> provider);

				static bool TryParse(StringPtr s, UInt64& result);
				static bool TryParse(StringPtr s, Globalization::NumberStyles style, intrusive_ptr<IFormatProvider> provider, UInt64& result);

				static StringPtr ToString(UInt64 self);
				static StringPtr ToString(UInt64 self, intrusive_ptr<IFormatProvider> provider);
				static StringPtr ToString(UInt64 self, StringPtr format);
				static StringPtr ToString(UInt64 self, StringPtr format, intrusive_ptr<IFormatProvider> provider);
			};
		}
	}
}
#endif//_SYSTEM_UINT64HELPER_H_