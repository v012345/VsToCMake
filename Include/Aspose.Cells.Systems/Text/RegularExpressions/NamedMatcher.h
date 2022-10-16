#ifndef _SYSTEM_TEXT_REGULAREXPRESSIONS_NAMEDMATCHER_H_
#define _SYSTEM_TEXT_REGULAREXPRESSIONS_NAMEDMATCHER_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Collections/ArrayList.h"
#include "Aspose.Cells.Systems/Collections/Hashtable.h"
#include "Aspose.Cells.Systems/Text/RegularExpressions/NamedMatchResult.h"
#include "Aspose.Cells.Systems/Text/RegularExpressions/NamedPattern.h"
#include "unicode/regex.h"

using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::Collections;
using namespace icucells;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Text {
				namespace RegularExpressions {
					class ASPOSE_CELLS_API NamedMatcher : public Object, public NamedMatchResult
					{
					private:
						RegexMatcher* m_matcher;
						intrusive_ptr<NamedPattern> m_parentPattern;

						void InitVars();
						int groupIndex(StringPtr groupName);

					public:
						NamedMatcher();
						NamedMatcher(intrusive_ptr<NamedPattern> parentPattern, RegexMatcher* matcher);
						NamedMatcher(intrusive_ptr<NamedPattern> parentPattern, StringPtr input);
						virtual ~NamedMatcher();
						virtual void add_ref() {
							++ref_count_;
						}

						virtual int release_ref() {
							return --ref_count_;
						}

						const RegexPattern standardPattern();
						intrusive_ptr<NamedPattern> namedPattern();
						intrusive_ptr<NamedMatcher> reset();
						intrusive_ptr<NamedMatcher> reset(StringPtr input);
						bool matches();
						intrusive_ptr<NamedMatchResult> toMatchResult();
						bool find();
						bool find(int start);
						bool lookingAt();
						intrusive_ptr<NamedMatcher> appendReplacement(StringPtr sb, StringPtr replacement);
						StringPtr appendTail(StringPtr sb);
						StringPtr group();
						StringPtr group(int group);
						int groupCount();
						intrusive_ptr<ArrayList> orderedGroups();
						StringPtr group(StringPtr groupName);
						HashtablePtr namedGroups();
						int start();
						int start(int group);
						int start(StringPtr groupName);
						int end();
						int end(int group);
						int end(StringPtr groupName);
						intrusive_ptr<NamedMatcher> region(int start, int end);
						int regionEnd();
						int regionStart();
						bool hitEnd();
						bool requireEnd();
						bool hasAnchoringBounds();
						bool hasTransparentBounds();
						StringPtr replaceAll(StringPtr replacement);
						StringPtr replaceFirst(StringPtr replacement);
						intrusive_ptr<NamedMatcher> useAnchoringBounds(bool b);
						intrusive_ptr<NamedMatcher> useTransparentBounds(bool b);

					};
				}
			}
		}
	}
}	// namespace Systems

#endif//_SYSTEM_TEXT_REGULAREXPRESSIONS_NAMEDMATCHER_H_