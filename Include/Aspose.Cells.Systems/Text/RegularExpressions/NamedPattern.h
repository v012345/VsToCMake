#ifndef _SYSTEM_TEXT_REGULAREXPRESSIONS_NAMEDPATTERN_H_
#define _SYSTEM_TEXT_REGULAREXPRESSIONS_NAMEDPATTERN_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Collections/ArrayList.h"
#include "unicode/regex.h"

using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::Collections;
using namespace icucells;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Text {
				namespace RegularExpressions {
					class NamedMatcher;
					class ASPOSE_CELLS_API NamedPattern : public Object
					{
					private:
						static RegexPattern* NAMED_GROUP_PATTERN;
						RegexPattern* m_pattern;
						StringPtr m_namedPattern;
						intrusive_ptr<ArrayList> m_groupNames;

						NamedPattern(StringPtr regex, int flags);
						void InitVars();
						static RegexPattern* CompileRegexPattern(StringPtr pattern);

					public:
						static intrusive_ptr<NamedPattern> compile(StringPtr regex);
						static intrusive_ptr<NamedPattern> compile(StringPtr regex, int flags);

						virtual ~NamedPattern();

						int flags();
						intrusive_ptr<NamedMatcher> matcher(StringPtr input);
						RegexPattern* pattern();
						StringPtr standardPattern();
						StringPtr namedPattern();
						intrusive_ptr<ArrayList> groupNames();
						intrusive_ptr<Array1D<String*>> split(StringPtr input, int limit);
						intrusive_ptr<Array1D<String*>> split(StringPtr input);
						StringPtr ToString();
						static intrusive_ptr<ArrayList> extractGroupNames(StringPtr namedPattern);
						static RegexPattern* buildStandardPattern(StringPtr namedPattern, int flags);
					};

				}
			}
		}
	}
}
#endif//_SYSTEM_TEXT_REGULAREXPRESSIONS_NAMEDPATTERN_H_