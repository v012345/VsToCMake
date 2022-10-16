#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "OperatorType.h"
#include "FormatConditionType.h"
#include "TimePeriodType.h"

namespace Aspose {
	namespace Cells {
		enum OperatorType;
		class IStyle;
		enum FormatConditionType;
		class IIconSet;
		class IDataBar;
		class IColorScale;
		class ITop10;
		class IAboveAverage;
		enum TimePeriodType;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents conditional formatting condition.
			/// </summary>
			/// <example><code>
			/// 
			/// [C++]
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
			/// 
			/// </code>
			/// </example>
	class ASPOSE_CELLS_API IFormatCondition : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the value or expression associated with this format condition.
			/// </summary>
			/// <param name="isR1C1" >Whether the formula needs to be formatted as R1C1.</param>
			/// <param name="isLocal" >Whether the formula needs to be formatted by locale.</param>
			/// <returns>The value or expression associated with this format condition.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetFormula1(bool isR1C1 , bool isLocal)=0;
			/// <summary>
			/// Gets the value or expression associated with this format condition.
			/// </summary>
			/// <param name="isR1C1" >Whether the formula needs to be formatted as R1C1.</param>
			/// <param name="isLocal" >Whether the formula needs to be formatted by locale.</param>
			/// <returns>The value or expression associated with this format condition.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetFormula2(bool isR1C1 , bool isLocal)=0;
			/// <summary>
			/// Gets the value or expression of the conditional formatting of the cell.
			/// </summary>
			/// <param name="isR1C1" >Whether the formula needs to be formatted as R1C1.</param>
			/// <param name="isLocal" >Whether the formula needs to be formatted by locale.</param>
			/// <param name="row" >The row index.</param>
			/// <param name="column" >The column index.</param>
			/// <returns>The value or expression associated with the conditional formatting of the cell.</returns>
			/// <remarks>The given cell must be contained by this conditional formatting, otherwise null will be returned.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetFormula1(bool isR1C1 , bool isLocal , Aspose::Cells::Systems::Int32 row , Aspose::Cells::Systems::Int32 column)=0;
			/// <summary>
			/// Gets the value or expression of the conditional formatting of the cell.
			/// </summary>
			/// <param name="isR1C1" >Whether the formula needs to be formatted as R1C1.</param>
			/// <param name="isLocal" >Whether the formula needs to be formatted by locale.</param>
			/// <param name="row" >The row index.</param>
			/// <param name="column" >The column index.</param>
			/// <returns>The value or expression associated with the conditional formatting of the cell.</returns>
			/// <remarks>The given cell must be contained by this conditional formatting, otherwise null will be returned.</remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetFormula2(bool isR1C1 , bool isLocal , Aspose::Cells::Systems::Int32 row , Aspose::Cells::Systems::Int32 column)=0;
			/// <summary>
			/// Sets the value or expression associated with this format condition.
			/// </summary>
			/// <param name="formula1" >The value or expression associated with this format condition.
			/// If the input value starts with '=', then it will be taken as formula. Otherwise it will be taken as plain value(text, number, bool).
			/// For text value that starts with '=', user may input it as formula in format: "=\"=...\"".</param>
			/// <param name="formula2" >The value or expression associated with this format condition. The input format is same with formula1</param>
			/// <param name="isR1C1" >Whether the formula is R1C1 formula.</param>
			/// <param name="isLocal" >Whether the formula is locale formatted.</param>
			 virtual void SetFormulas(intrusive_ptr<Aspose::Cells::Systems::String> formula1 , intrusive_ptr<Aspose::Cells::Systems::String> formula2 , bool isR1C1 , bool isLocal)=0;
			/// <summary>
			/// Sets the value or expression associated with this format condition.
			/// </summary>
			/// <param name="formula" >The value or expression associated with this format condition.
			/// If the input value starts with '=', then it will be taken as formula. Otherwise it will be taken as plain value(text, number, bool).
			/// For text value that starts with '=', user may input it as formula in format: "=\"=...\"".</param>
			/// <param name="isR1C1" >Whether the formula is R1C1 formula.</param>
			/// <param name="isLocal" >Whether the formula is locale formatted.</param>
			 virtual void SetFormula1(intrusive_ptr<Aspose::Cells::Systems::String> formula , bool isR1C1 , bool isLocal)=0;
			/// <summary>
			/// Sets the value or expression associated with this format condition.
			/// </summary>
			/// <param name="formula" >The value or expression associated with this format condition.
			/// If the input value starts with '=', then it will be taken as formula. Otherwise it will be taken as plain value(text, number, bool).
			/// For text value that starts with '=', user may input it as formula in format: "=\"=...\"".</param>
			/// <param name="isR1C1" >Whether the formula is R1C1 formula.</param>
			/// <param name="isLocal" >Whether the formula is locale formatted.</param>
			 virtual void SetFormula2(intrusive_ptr<Aspose::Cells::Systems::String> formula , bool isR1C1 , bool isLocal)=0;
			/// <summary>
			/// Gets and sets the value or expression associated with conditional formatting.
			/// </summary>
			/// <remarks>
			/// Please add all areas before setting formula.
			/// For setting formula for this condition, if the input value starts with '=', then it will be taken as formula.
			/// Otherwise it will be taken as plain value(text, number, bool). For text value that starts with '=', user may input it as formula in format: "=\"=...\"".
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetFormula1()=0;
			/// <summary>
			/// Sets the value or expression associated with conditional formatting.
			/// </summary>
			/// <remarks>
			/// Please add all areas before setting formula.
			/// For setting formula for this condition, if the input value starts with '=', then it will be taken as formula.
			/// Otherwise it will be taken as plain value(text, number, bool). For text value that starts with '=', user may input it as formula in format: "=\"=...\"".
			/// </remarks>
			 virtual void SetFormula1(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the formula of the conditional formatting of the cell.
			/// </summary>
			/// <param name="row" >The row index.</param>
			/// <param name="column" >The column index.</param>
			/// <returns>The formula.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetFormula1(Aspose::Cells::Systems::Int32 row , Aspose::Cells::Systems::Int32 column)=0;
			/// <summary>
			/// Gets the value or expression associated with conditional formatting.
			/// </summary>
			/// <remarks>
			/// Please add all areas before setting formula.
			/// For setting formula for this condition, if the input value starts with '=', then it will be taken as formula.
			/// Otherwise it will be taken as plain value(text, number, bool). For text value that starts with '=', user may input it as formula in format: "=\"=...\"".
			/// </remarks>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetFormula2()=0;
			/// <summary>
			/// Sets the value or expression associated with conditional formatting.
			/// </summary>
			/// <remarks>
			/// Please add all areas before setting formula.
			/// For setting formula for this condition, if the input value starts with '=', then it will be taken as formula.
			/// Otherwise it will be taken as plain value(text, number, bool). For text value that starts with '=', user may input it as formula in format: "=\"=...\"".
			/// </remarks>
			 virtual void SetFormula2(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the formula of the conditional formatting of the cell.
			/// </summary>
			/// <param name="row" >The row index.</param>
			/// <param name="column" >The column index.</param>
			/// <returns>The formula.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetFormula2(Aspose::Cells::Systems::Int32 row , Aspose::Cells::Systems::Int32 column)=0;
			/// <summary>
			/// Gets the conditional format operator type.
			/// </summary>
			/// <see cref="OperatorType" />
			/// 
			 virtual Aspose::Cells::OperatorType GetOperator()=0;
			/// <summary>
			/// Sets the conditional format operator type.
			/// </summary>
			/// <see cref="OperatorType" />
			/// 
			 virtual void SetOperator(Aspose::Cells::OperatorType value)=0;
			/// <summary>
			/// True, no rules with lower priority may be applied over this rule, when this rule evaluates to true.
			/// Only applies for Excel 2007;
			/// </summary>
			 virtual bool GetStopIfTrue()=0;
			/// <summary>
			/// True, no rules with lower priority may be applied over this rule, when this rule evaluates to true.
			/// Only applies for Excel 2007;
			/// </summary>
			 virtual void SetStopIfTrue(bool value)=0;
			/// <summary>
			/// The priority of this conditional formatting rule. This value is used to determine which
			/// format should be evaluated and rendered. Lower numeric values are higher priority than
			/// higher numeric values, where '1' is the highest priority.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetPriority()=0;
			/// <summary>
			/// The priority of this conditional formatting rule. This value is used to determine which
			/// format should be evaluated and rendered. Lower numeric values are higher priority than
			/// higher numeric values, where '1' is the highest priority.
			/// </summary>
			 virtual void SetPriority(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Gets style of conditional formatted cell ranges.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::IStyle> 		GetIStyle()=0;
			/// <summary>
			/// Sets style of conditional formatted cell ranges.
			/// </summary>
			 virtual void 		SetIStyle(intrusive_ptr<Aspose::Cells::IStyle> value)=0;
			/// <summary>
			/// Gets whether the conditional format Type.
			/// </summary>
			/// <see cref="FormatConditionType" />
			/// 
			 virtual Aspose::Cells::FormatConditionType GetType()=0;
			/// <summary>
			/// Sets whether the conditional format Type.
			/// </summary>
			/// <see cref="FormatConditionType" />
			/// 
			 virtual void SetType(Aspose::Cells::FormatConditionType value)=0;
			/// <summary>
			/// Get the conditional formatting's "IIconSet" instance.
			/// The default instance's IconSetType is TrafficLights31.
			/// Valid only for type = IconSet.
			/// </summary>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IIconSet> 		GetIIconSet()=0;
			/// <summary>
			/// Get the conditional formatting's "IDataBar" instance.
			/// The default instance's color is blue.
			/// Valid only for type is DataBar.
			/// </summary>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IDataBar> 		GetIDataBar()=0;
			/// <summary>
			/// Get the conditional formatting's "IColorScale" instance.
			/// The default instance is a "green-yellow-red" 3ColorScale .
			/// Valid only for type = ColorScale.
			/// </summary>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IColorScale> 		GetIColorScale()=0;
			/// <summary>
			/// Get the conditional formatting's "Top10" instance.
			/// The default instance's rule highlights cells whose
			/// values fall in the top 10 bracket.
			/// Valid only for type is Top10.
			/// </summary>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::ITop10> 		GetITop10()=0;
			/// <summary>
			/// Get the conditional formatting's "AboveAverage" instance.
			/// The default instance's rule highlights cells that are 
			/// above the average for all values in the range.
			/// Valid only for type = AboveAverage.
			/// </summary>
			/// <returns/>
			/// 
			 virtual intrusive_ptr<Aspose::Cells::IAboveAverage> 		GetIAboveAverage()=0;
			/// <summary>
			/// The text value in a "text contains" conditional formatting rule. 
			/// Valid only for type = containsText, notContainsText, beginsWith and endsWith.
			/// The default value is null.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetText()=0;
			/// <summary>
			/// The text value in a "text contains" conditional formatting rule. 
			/// Valid only for type = containsText, notContainsText, beginsWith and endsWith.
			/// The default value is null.
			/// </summary>
			 virtual void SetText(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// The applicable time period in a "date occurring��" conditional formatting rule. 
			/// Valid only for type = timePeriod.
			/// The default value is TimePeriodType.Today.
			/// </summary>
			 virtual Aspose::Cells::TimePeriodType GetTimePeriod()=0;
			/// <summary>
			/// The applicable time period in a "date occurring��" conditional formatting rule. 
			/// Valid only for type = timePeriod.
			/// The default value is TimePeriodType.Today.
			/// </summary>
			 virtual void SetTimePeriod(Aspose::Cells::TimePeriodType value)=0;

	};
}
}
