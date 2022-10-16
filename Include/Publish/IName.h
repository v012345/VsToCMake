#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Array1D.h"

namespace Aspose {
	namespace Cells {
		class IRange;
		class IReferredArea;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			///  Represents a defined name for a range of cells.
			///  </summary>
			/// <example>
			///  <code>
			///  
			///  [C++]
			///  
			///  //Instantiating a Workbook object
			///  intrusive_ptr<Aspose::Cells::IWorkbook> workbook = Factory::CreateIWorkbook();
			///  //Accessing the first worksheet in the Excel file
			///  intrusive_ptr<Aspose::Cells::IWorksheet> worksheet = workbook->GetIWorksheets()->GetObjectByIndex(0);
			///  //Creating a named range
			///  intrusive_ptr<IRange> range = worksheet->GetICells()->CreateIRange(new String("B4"), new String("G14"));
			///  //Setting the name of the named range
			///  range->SetName(new String("TestRange"));
			///  //Saving the modified Excel file in default (that is Excel 2000) format
			///  workbook->Save(new String("C:\\INameTestOutput.xls")); 
			/// 
			///  </code>
			/// 
			///  </example>
	class ASPOSE_CELLS_API IName : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Gets the comment of the name.
			/// Only applies for Excel 2007.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetComment()=0;
			/// <summary>
			/// Sets the comment of the name.
			/// Only applies for Excel 2007.
			/// </summary>
			 virtual void SetComment(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the name text of the object.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetText()=0;
			/// <summary>
			/// Gets the name text of the object.
			/// </summary>
			 virtual void SetText(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Gets the name full text of the object with the scope setting.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetFullText()=0;
			/// <summary>
			/// Returns or sets the formula that the name is defined to refer to, beginning with an equal sign.
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetRefersTo()=0;
			/// <summary>
			/// Returns or sets the formula that the name is defined to refer to, beginning with an equal sign.
			/// </summary>
			 virtual void SetRefersTo(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			///  Gets a R1C1 reference of the <see cref="IName" />
			/// .
			/// </summary>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetR1C1RefersTo()=0;
			/// <summary>
			///  Sets a R1C1 reference of the <see cref="IName" />
			/// .
			/// </summary>
			 virtual void SetR1C1RefersTo(intrusive_ptr<Aspose::Cells::Systems::String> value)=0;
			/// <summary>
			/// Get the reference of this Name.
			/// </summary>
			/// <param name="isR1C1" >Whether the reference needs to be formatted as R1C1.</param>
			/// <param name="isLocal" >Whether the reference needs to be formatted by locale.</param>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetRefersTo(bool isR1C1 , bool isLocal)=0;
			/// <summary>
			/// Get the reference of this Name based on specified cell.
			/// </summary>
			/// <param name="isR1C1" >Whether the reference needs to be formatted as R1C1.</param>
			/// <param name="isLocal" >Whether the reference needs to be formatted by locale.</param>
			/// <param name="row" >The row index of the cell.</param>
			/// <param name="column" >The column index of the cell.</param>
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetRefersTo(bool isR1C1 , bool isLocal , Aspose::Cells::Systems::Int32 row , Aspose::Cells::Systems::Int32 column)=0;
			/// <summary>
			/// Set the reference of this Name.
			/// </summary>
			/// <param name="refersTo" >The reference.</param>
			/// <param name="isR1C1" >Whether the reference is R1C1 format.</param>
			/// <param name="isLocal" >Whether the reference is locale formatted.</param>
			 virtual void SetRefersTo(intrusive_ptr<Aspose::Cells::Systems::String> refersTo , bool isR1C1 , bool isLocal)=0;
			/// <summary>
			/// Indicates whether this name is referred by other formulas.
			/// </summary>
			 virtual bool IsReferred()=0;
			/// <summary>
			/// Indicates whether the name is visible. 
			/// </summary>
			 virtual bool IsVisible()=0;
			/// <summary>
			/// Indicates whether the name is visible. 
			/// </summary>
			 virtual void SetVisible(bool value)=0;
			/// <summary>
			/// Indicates this name belongs to Workbook or Worksheet.
			/// 0 = Global name, otherwise index to sheet (one-based)
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetSheetIndex()=0;
			/// <summary>
			/// Indicates this name belongs to Workbook or Worksheet.
			/// 0 = Global name, otherwise index to sheet (one-based)
			/// </summary>
			 virtual void SetSheetIndex(Aspose::Cells::Systems::Int32 value)=0;
			/// <summary>
			/// Returns a string represents the current Range object.
			/// </summary>
			/// <returns/>
			/// 
			  virtual intrusive_ptr<Aspose::Cells::Systems::String> ToString()=0;
			/// <summary>
			/// Gets all ranges referred by this name.
			/// </summary>
			/// <returns>All ranges.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::IRange*>> 		GetIRanges()=0;
			/// <summary>
			/// Gets all ranges referred by this name.
			/// </summary>
			/// <param name="recalculate" >whether recalculate it if this name has been calculated before this invocation.</param>
			/// <returns>All ranges.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::IRange*>> 		GetIRanges(bool recalculate)=0;
			/// <summary>
			/// Gets all references referred by this name.
			/// </summary>
			/// <param name="recalculate" >whether recalculate it if this name has been calculated before this invocation.</param>
			/// <returns>All ranges.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Array1D<Aspose::Cells::IReferredArea*>> 		GetIReferredAreas(bool recalculate)=0;
			/// <summary>
			/// Gets the range if this name refers to a range.
			/// </summary>
			/// <returns>The range.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IRange> 		GetIRange()=0;
			/// <summary>
			/// Gets the range if this name refers to a range
			/// </summary>
			/// <param name="recalculate" >whether recalculate it if this name has been calculated before this invocation.</param>
			/// <returns>The range.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IRange> 		GetIRange(bool recalculate)=0;
			/// <summary>
			/// Gets the range if this name refers to a range.
			/// If the reference of this name is not absolute, the range may be different for different cell.
			/// </summary>
			/// <param name="sheetIndex" >The according sheet index.</param>
			/// <param name="row" >The according row index.</param>
			/// <param name="column" >The according column index</param>
			/// <returns>The range.</returns>
			 virtual intrusive_ptr<Aspose::Cells::IRange> 		GetIRange(Aspose::Cells::Systems::Int32 sheetIndex , Aspose::Cells::Systems::Int32 row , Aspose::Cells::Systems::Int32 column)=0;

	};
}
}
