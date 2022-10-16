#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "FormatConditionType.h"
#include "OperatorType.h"
#include "Aspose.Cells.Systems/String.h"

namespace Aspose {
	namespace Cells {
		class ICellArea;
		enum FormatConditionType;
		enum OperatorType;
		class IFormatCondition;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			///  Represents conditional formatting.
			///  The FormatConditions can contain up to three conditional formats. 
			///  </summary>
			/// <example>
			///  <code>
			///  
			///  [C++] 
			/// intrusive_ptr<IWorkbook> workbook = Factory::CreateIWorkbook();
			/// intrusive_ptr<IWorksheet> sheet = workbook->GetIWorksheets()->GetObjectByIndex(0);  
			/// //Adds an empty conditional formatting
			/// int index = sheet->GetIConditionalFormattings()->Add();
			/// intrusive_ptr<IFormatConditionCollection> fcs = sheet->GetIConditionalFormattings()->GetObjectByIndex(index);   
			/// //Sets the conditional format range.
			/// intrusive_ptr<ICellArea> ca = Factory::CreateICellArea();
			/// ca->SetstartRow(0);
			/// ca->SetendRow(0);
			/// ca->SetstartColumn(0);
			/// ca->SetendColumn(0);
			/// fcs->AddArea(ca);  
			/// ca = Factory::CreateICellArea();
			/// ca->SetstartRow(1);
			/// ca->SetendRow(1);
			/// ca->SetstartColumn(1);
			/// ca->SetendColumn(1);
			/// fcs->AddArea(ca); 
			/// //Adds condition.
			/// int conditionIndex = fcs->AddCondition(FormatConditionType_CellValue, OperatorType_Between, new String("=A2"), new String("100"));   
			/// //Adds condition.
			/// int conditionIndex2 = fcs->AddCondition(FormatConditionType_CellValue, OperatorType_Between, new String("50"), new String("100"));   
			/// //Sets the background color.
			/// intrusive_ptr<IFormatCondition> fc = fcs->GetObjectByIndex(conditionIndex);
			/// fc->GetIStyle()->SetBackgroundColor(Color::GetRed()); 
			/// //Saving the Excel file
			/// workbook->Save(new String("D:\\output.xls"));
			///  </code>
			/// 
			///  </example>
	class ASPOSE_CELLS_API IFormatConditionCollection : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Adds a formatting condition and effected cell rang to the FormatConditions
			///  The FormatConditions can contain up to three conditional formats.
			///  References to the other sheets are not allowed in the formulas of conditional formatting.
			/// </summary>
			/// <param name="cellArea" >Conditional formatted cell range.</param>
			/// <param name="type" >Type of conditional formatting.It could be one of the members of FormatConditionType.</param>
			/// <param name="operatorType" >Comparison operator.It could be one of the members of OperatorType.</param>
			/// <param name="formula1" >The value or expression associated with conditional formatting.</param>
			/// <param name="formula2" >The value or expression associated with conditional formatting</param>
			/// <returns>[0]:Formatting condition object index;[1] Effected cell rang index.</returns>
			/// <see cref="OperatorType" />
			/// 
			/// <set cref="FormatConditionType" />
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::Systems::Int32>> 		Add(intrusive_ptr<Aspose::Cells::ICellArea> cellArea , Aspose::Cells::FormatConditionType type , Aspose::Cells::OperatorType operatorType , intrusive_ptr<Aspose::Cells::Systems::String> formula1 , intrusive_ptr<Aspose::Cells::Systems::String> formula2)=0;
			/// <summary>
			/// Adds a conditional formatted cell range.
			/// </summary>
			/// <param name="cellArea" >Conditional formatted cell range.</param>
			/// <returns>Conditional formatted cell rang index.</returns>
			 virtual Aspose::Cells::Systems::Int32 		AddArea(intrusive_ptr<Aspose::Cells::ICellArea> cellArea)=0;
			/// <summary>
			/// Adds a formatting condition.
			/// </summary>
			/// <param name="type" ><set cref="FormatConditionType" />
			///  of conditional formatting.
			/// It could be one of the members of FormatConditionType.</param>
			/// <param name="operatorType" >The comparison <see cref="OperatorType" />
			/// .
			/// It could be one of the members of OperatorType.</param>
			/// <param name="formula1" >The value or expression associated with conditional formatting.
			/// If the input value starts with '=', then it will be taken as formula.
			/// Otherwise it will be taken as plain value(text, number, bool).
			/// For text value that starts with '=', user may input it as formula in format: "=\"=...\"".</param>
			/// <param name="formula2" >The value or expression associated with conditional formatting.
			/// The input format is same with formula1</param>
			/// <returns>Formatting condition object index;</returns>
			 virtual Aspose::Cells::Systems::Int32 AddCondition(Aspose::Cells::FormatConditionType type , Aspose::Cells::OperatorType operatorType , intrusive_ptr<Aspose::Cells::Systems::String> formula1 , intrusive_ptr<Aspose::Cells::Systems::String> formula2)=0;
			/// <summary>
			/// Add a format condition.
			/// </summary>
			/// <param name="type" >Format condition type.</param>
			/// <returns>Formatting condition object index;</returns>
			 virtual Aspose::Cells::Systems::Int32 AddCondition(Aspose::Cells::FormatConditionType type)=0;
			/// <summary>
			/// Gets the count of the conditions.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetCount()=0;
			/// <summary>
			/// Gets count of conditionally formatted ranges.
			///  </summary>
			 virtual Aspose::Cells::Systems::Int32 GetRangeCount()=0;
			/// <summary>
			/// Gets the formatting condition by index.
			/// </summary>
			/// <param name="index" >the index of the formatting condition to return.</param>
			/// <returns>the formatting condition </returns>
			 virtual intrusive_ptr<Aspose::Cells::IFormatCondition> 		GetObjectByIndex(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Gets the conditional formatted cell range by index.
			/// </summary>
			/// <param name="index" >the index of the conditional formatted cell range.</param>
			/// <returns>the conditional formatted cell range</returns>
			 virtual intrusive_ptr<Aspose::Cells::ICellArea> 		GetICellArea(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Removes conditional formatted cell range by index.
			/// </summary>
			/// <param name="index" >The index of the conditional formatted cell range to be removed.</param>
			 virtual void RemoveArea(Aspose::Cells::Systems::Int32 index)=0;
			/// <summary>
			/// Remove conditional formatting int the range.
			/// </summary>
			/// <param name="startRow" >The startRow of the range.</param>
			/// <param name="startColumn" >The startColumn of the range.</param>
			/// <param name="totalRows" >The number of rows of the range.</param>
			/// <param name="totalColumns" >The number of columns of the range.</param>
			/// <returns>
			/// Returns TRUE, this FormatCondtionCollection should be removed.
			/// </returns>
			 virtual bool RemoveArea(Aspose::Cells::Systems::Int32 startRow , Aspose::Cells::Systems::Int32 startColumn , Aspose::Cells::Systems::Int32 totalRows , Aspose::Cells::Systems::Int32 totalColumns)=0;
			/// <summary>
			/// Removes the formatting condition by index.
			/// </summary>
			/// <param name="index" >The index of the formatting condition to be removed.</param>
			 virtual void RemoveCondition(Aspose::Cells::Systems::Int32 index)=0;

	};
}
}
