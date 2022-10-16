#ifndef _SYSTEM_ENVIRONMENT_H_
#define _SYSTEM_ENVIRONMENT_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose { 
	namespace Cells { 
		namespace Systems {
			class ASPOSE_CELLS_API Environment : public Object
			{
				private:

				protected:

				public:
					static StringPtr GetCurrentDirectoryPal();
					static StringPtr GetUserNamePal();
					static StringPtr GetEnvironmentVariablePal(StringPtr variable);
					static int GetTickCountPal();
					static StringPtr GetSystemDirectoryPal();
					static StringPtr GetNewLine();
					static StringPtr NewLine;

			};
		}
	}
}
#endif//_SYSTEM_ENVIRONMENT_H_