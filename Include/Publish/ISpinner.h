#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "IShape.h"

namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents the Forms control: Spinner.
			/// </summary>
			/// <remarks>Scroll value must be between 0 and 30000.</remarks>
	class ASPOSE_CELLS_API ISpinner : virtual public Aspose::Cells::Drawing::IShape
	{
		public:
			/// <summary>
			/// Gets the current value.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetCurrentValue()=0;
			/// <summary>
			/// Sets the current value.
			/// </summary>
			 virtual void SetCurrentValue(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets the minimum value of a scroll bar or spinner range.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetMin()=0;
			/// <summary>
			/// Sets the minimum value of a scroll bar or spinner range.
			/// </summary>
			 virtual void SetMin(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets the maximum value of a scroll bar or spinner range.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetMax()=0;
			/// <summary>
			/// Sets the maximum value of a scroll bar or spinner range.
			/// </summary>
			 virtual void SetMax(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets the amount that the scroll bar or spinner is incremented a line scroll.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetIncrementalChange()=0;
			/// <summary>
			/// Sets the amount that the scroll bar or spinner is incremented a line scroll.
			/// </summary>
			 virtual void SetIncrementalChange(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Indicates whether the shape has 3-D shading.
			/// </summary>
			 virtual bool GetShadow()=0;
			/// <summary>
			/// Indicates whether the shape has 3-D shading.
			/// </summary>
			 virtual void SetShadow(bool value)=0;
			/// <summary>
			/// Indicates whether this is a horizontal scroll bar.
			/// </summary>
			 virtual bool IsHorizontal()=0;
			/// <summary>
			/// Indicates whether this is a horizontal scroll bar.
			/// </summary>
			 virtual void SetHorizontal(bool value)=0;

	};
}
}
}
