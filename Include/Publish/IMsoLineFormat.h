#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "MsoLineStyle.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"
#include "MsoLineDashStyle.h"
#include "Aspose.Cells.Systems/Double.h"

namespace Aspose {
	namespace Cells {
		namespace Drawing {
			enum MsoLineStyle;
			enum MsoLineDashStyle;
		}
	}
}
namespace Aspose{
namespace Cells{
namespace Drawing{
			/// <summary>
			/// Represents line and arrowhead formatting.
			/// </summary>
	class ASPOSE_CELLS_API IMsoLineFormat : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Indicates whether the object is visible.
			/// </summary>
			 virtual bool IsVisible()=0;
			/// <summary>
			/// Indicates whether the object is visible.
			/// </summary>
			 virtual void SetVisible(bool value)=0;
			/// <summary>
			/// Returns a Style object that represents the style of the specified range.
			/// </summary>
			 virtual Aspose::Cells::Drawing::MsoLineStyle GetStyle()=0;
			/// <summary>
			/// Returns a Style object that represents the style of the specified range.
			/// </summary>
			 virtual void SetStyle(Aspose::Cells::Drawing::MsoLineStyle value)=0;
			/// <summary>
			/// Gets and sets the border line fore color.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetForeColor()=0;
			/// <summary>
			/// Gets and sets the border line fore color.
			/// </summary>
			 virtual void SetForeColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> value)=0;
			/// <summary>
			/// Gets and sets the border line back color.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetBackColor()=0;
			/// <summary>
			/// Gets and sets the border line back color.
			/// </summary>
			 virtual void SetBackColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> value)=0;
			/// <summary>
			/// Gets or sets the dash style for the specified line.
			/// </summary>
			 virtual Aspose::Cells::Drawing::MsoLineDashStyle GetDashStyle()=0;
			/// <summary>
			/// Gets or sets the dash style for the specified line.
			/// </summary>
			 virtual void SetDashStyle(Aspose::Cells::Drawing::MsoLineDashStyle value)=0;
			/// <summary>
			/// Returns or sets the degree of transparency of the specified fill as a value from 0.0 (opaque) through 1.0 (clear).
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetTransparency()=0;
			/// <summary>
			/// Returns or sets the degree of transparency of the specified fill as a value from 0.0 (opaque) through 1.0 (clear).
			/// </summary>
			 virtual void SetTransparency(Aspose::Cells::Systems::Double value)=0;
			/// <summary>
			/// Returns or sets the weight of the line ,in units of pt.
			/// </summary>
			 virtual Aspose::Cells::Systems::Double GetWeight()=0;
			/// <summary>
			/// Returns or sets the weight of the line ,in units of pt.
			/// </summary>
			 virtual void SetWeight(Aspose::Cells::Systems::Double value)=0;

	};
}
}
}
