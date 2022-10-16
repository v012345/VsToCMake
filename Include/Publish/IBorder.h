#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Drawing/Color.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "CellBorderType.h"

namespace Aspose {
	namespace Cells {
		class IThemeColor;
		enum CellBorderType;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Encapsulates the object that represents the cell border.
			/// </summary>
			/// 
			/// <example>
			/// <code>
			/// [C++]
			/// 
			/// intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();
			/// int styleIndex = workbook->GetIStyles()->Add();
			/// intrusive_ptr<IStyle> style = workbook->GetIStyles()->GetObjectByIndex(styleIndex);
			/// //Set top border style and color
			/// intrusive_ptr<IBorder> border = style->GetIBorders()->GetObjectByIndex(BorderType_TopBorder);
			/// border->SetLineStyle(CellBorderType_Medium);
			/// border->SetColor(Color::GetRed());
			/// 
			/// workbook->GetIWorksheets()->Add();
			/// intrusive_ptr<Aspose::Cells::IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);
			/// intrusive_ptr<Aspose::Cells::ICell> cell = worksheet->GetICells()->GetObjectByIndex(new String("A1"));
			/// cell->SetIStyle(style);
			/// 
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IBorder : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			///  Gets the theme color of the border.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IThemeColor> 		GetIThemeColor()=0;
			/// <summary>
			///  Sets the theme color of the border.
			/// </summary>
			 virtual void 		SetIThemeColor(intrusive_ptr<Aspose::Cells::IThemeColor> value)=0;
			/// <summary>
			/// Gets the <see cref="System.Drawing.Color" />
			///  of the border.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> GetColor()=0;
			/// <summary>
			/// Sets the <see cref="System.Drawing.Color" />
			///  of the border.
			/// </summary>
			 virtual void SetColor(intrusive_ptr<Aspose::Cells::Systems::Drawing::Color> value)=0;
			/// <summary>
			/// Gets the color with a 32-bit ARGB value.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetArgbColor()=0;
			/// <summary>
			/// Sets the color with a 32-bit ARGB value.
			/// </summary>
			 virtual void SetArgbColor(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets the cell border type.
			/// </summary>
			 virtual Aspose::Cells::CellBorderType GetLineStyle()=0;
			/// <summary>
			/// Sets the cell border type.
			/// </summary>
			 virtual void SetLineStyle(Aspose::Cells::CellBorderType value)=0;

	};
}
}
