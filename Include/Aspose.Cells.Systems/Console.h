#ifndef _SYSTEM_CONSOLE_H_
#define _SYSTEM_CONSOLE_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {

			class ASPOSE_CELLS_API Console
			{
			public:
				static void Write(StringPtr info);
				static void WriteLine(StringPtr info);
				static StringPtr ReadLine();
				static void WriteLine();


			};
		}
	}
}

#endif//_SYSTEM_CONSOLE_H_