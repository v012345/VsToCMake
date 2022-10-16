#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Double.h"
#include "Aspose.Cells.Systems/DateTime.h"

namespace Aspose{
namespace Cells{
namespace Pivot{
			/// <summary>
			/// Represents a item in a PivotField report.
			/// </summary>
	class ASPOSE_CELLS_API IPivotItem : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets whether the pivot item is hidden.
			/// </summary>
			 virtual bool IsHidden()=0;
			/// <summary>
			/// Sets whether the pivot item is hidden.
			/// </summary>
			 virtual void SetHidden(bool value)=0;
			/// <summary>
			/// Specifying the position index in all the PivotItems,not the PivotItems under the same parent node.
			/// </summary>
			 virtual void SetPosition(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Specifying the position index in the PivotItems under the same parent node.
			/// </summary>
			 virtual void SetPositionInSameParentNode(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Moves the item up or down
			/// </summary>
			/// <param name="count" >
			/// The number of moving up or down.
			/// Move the item up if this is less than zero;
			/// Move the item down if this is greater than zero.
			/// </param>
			/// <param name="isSameParent" >
			/// Specifying whether moving operation is in the same parent node or not
			/// </param>
			 virtual void Move(Aspose::Cells::Systems::Int32 count , bool isSameParent)=0;
			/// <summary>
			///  Gets and Sets whether the pivot item hides detail.
			/// </summary>
			 virtual bool IsHideDetail()=0;
			/// <summary>
			///  Gets and Sets whether the pivot item hides detail.
			/// </summary>
			 virtual void SetHideDetail(bool value)=0;
			/// Gets the string value of the pivot item
			/// If the value is null, it will return ""
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetStringValue()=0;
			/// <summary>
			/// Gets the double value of the pivot item
			/// If the value is null or not number ,it will return 0
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetDoubleValue()=0;
			/// <summary>
			/// Gets the date time value of the pivot item
			/// If the value is null ,it will return DateTime.MinValue
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::DateTime> GetDateTimeValue()=0;
			/// <summary>
			/// Gets the value of the pivot item
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Object> GetValue()=0;
			/// <summary>
			/// Gets the name of the pivot item.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetName()=0;
			/// <summary>
			/// Gets the index of the pivot item in the pivot field
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetIndex()=0;
			/// <summary>
			/// Gets the index of the pivot item in the pivot field
			/// </summary>
			 virtual void SetIndex(Aspose::Cells::Systems::Int32 value)=0;

	};
}
}
}
