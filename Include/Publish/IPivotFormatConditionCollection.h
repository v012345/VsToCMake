#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Collections/CollectionBase.h"

namespace Aspose {
	namespace Cells {
		namespace Pivot {
			class IPivotFormatCondition;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Pivot{
			/// <summary>
			/// Represents PivotTable Format Conditions.
			/// </summary>
	class ASPOSE_CELLS_API IPivotFormatConditionCollection : public Aspose::Cells::Systems::Collections::CollectionBase
	{
		public:
			/// <summary>
			/// Adds a pivot FormatCondition to the collection.
			/// </summary>
			/// <returns>pivot FormatCondition object index.</returns>
			/// <remarks>not supported</remarks>
			 virtual Aspose::Cells::Systems::Int32 Add()=0;
			/// <summary>
			/// Gets the pivot FormatCondition object at the specific index.
			/// </summary>
			/// <returns>pivot FormatCondition object.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Pivot::IPivotFormatCondition> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;

	};
}
}
}
