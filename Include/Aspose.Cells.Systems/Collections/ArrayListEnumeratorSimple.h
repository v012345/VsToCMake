#ifndef _SYSTEM_COLLECTIONS_ARRAYLISTENUMERATORSIMPLE_H_
#define _SYSTEM_COLLECTIONS_ARRAYLISTENUMERATORSIMPLE_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/ICloneable.h"
#include "Aspose.Cells.Systems/Collections/IEnumerator.h"

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Collections {
				class ArrayList;
				class ArrayListEnumeratorSimple : public Object, public IEnumerator, public ICloneable
				{
				private:
					intrusive_ptr<ArrayList> list;
					int index;
					int version;
					ObjectPtr currentElement;
					bool isArrayList;
					static ObjectPtr dummyObject;
				public:
					virtual ~ArrayListEnumeratorSimple() {}
					virtual void add_ref() {
						++ref_count_;
					}

					virtual int release_ref() {
						return --ref_count_;
					}
					ObjectPtr GetCurrent();
					ArrayListEnumeratorSimple(intrusive_ptr<ArrayList> list);
					ObjectPtr Clone();
					bool MoveNext();
					void Reset();
				};
				
			}
		}
	}
}








#endif//_SYSTEM_COLLECTIONS_ARRAYLISTENUMERATORSIMPLE_H_