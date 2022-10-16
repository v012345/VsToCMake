#ifndef _SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXHELPER_H_
#define _SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXHELPER_H_

#include "Aspose.Cells.Systems/Object.h"

using namespace Aspose::Cells::Systems;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Text {
				namespace RegularExpressions {
					class ASPOSE_CELLS_API RegexHelper : public Object
					{
					public:
						static int UNIX_LINES;
						static int CASE_INSENSITIVE;
						static int COMMENTS;
						static int MULTILINE;
						static int LITERAL;
						static int DOTALL;
						static int UNICODE_CASE;
						static int CANON_EQ;

						static int dotRegexOptionsToJavaRegexFlag(int options);
					};
				}
			}
		}
	}
}

#endif//_SYSTEM_TEXT_REGULAREXPRESSIONS_REGEXHELPER_H_