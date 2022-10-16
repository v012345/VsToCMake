#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Int32.h"

namespace Aspose{
namespace Cells{
			/// <summary>
			/// Represents a referred area by the formula.
			/// </summary>
			/// 
			/// 
	class ASPOSE_CELLS_API IReferredArea : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Indicates whether this is an external link.
			/// </summary>
			/// 
			/// 
			 virtual bool IsExternalLink()=0;
			/// <summary>
			///  Get the external file name if this is an external reference.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetExternalFileName()=0;
			/// <summary>
			/// Indicates which sheet this reference is in.
			/// </summary>
			/// 
			/// 
			 virtual intrusive_ptr<Aspose::Cells::Systems::String> GetSheetName()=0;
			/// <summary>
			/// Indicates whether this is an area.
			/// </summary>
			/// 
			/// <remarks>
			/// If this is not an area, only StartRow and StartColumn effect.
			/// </remarks>
			/// 
			/// 
			 virtual bool IsArea()=0;
			/// <summary>
			/// The end column of the area.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Int32 GetEndColumn()=0;
			/// <summary>
			/// The start column of the area.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Int32 GetStartColumn()=0;
			/// <summary>
			/// The end row of the area.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Int32 GetEndRow()=0;
			/// <summary>
			/// The start row of the area.
			/// </summary>
			/// 
			/// 
			 virtual Aspose::Cells::Systems::Int32 GetStartRow()=0;
			/// <summary>
			/// Gets cell values in this area.
			/// </summary>
			/// 
			/// <returns>If this area is invalid, "#REF!" will be returned;
			/// If this area is one single cell, then return the cell value object;
			/// Otherwise return one 2D array for all values in this area.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Object> GetValues()=0;
			/// <summary>
			/// Gets cell values in this area.
			/// </summary>
			/// <param name="calculateFormulas" >In this range, if there are some formulas that have not been calculated,
			/// this flag denotes whether those formulas should be calculated recursively</param>
			/// <returns>If this area is invalid, "#REF!" will be returned;
			/// If this area is one single cell, then return the cell value object;
			/// Otherwise return one 2D array for all values in this area.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Object> GetValues(bool calculateFormulas)=0;
			/// <summary>
			/// Gets cell value with given offset from the top-left of this area.
			/// </summary>
			/// <param name="rowOffset" >row offset from the start row of this area</param>
			/// <param name="colOffset" >column offset from the start row of this area</param>
			/// <returns>"#REF!" if this area is invalid;
			/// "#N/A" if given offset out of this area;
			/// Otherwise return the cell value at given position.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Object> GetValue(Aspose::Cells::Systems::Int32 rowOffset , Aspose::Cells::Systems::Int32 colOffset)=0;
			/// <summary>
			/// Gets cell value with given offset from the top-left of this area.
			/// </summary>
			/// <param name="rowOffset" >row offset from the start row of this area</param>
			/// <param name="colOffset" >column offset from the start row of this area</param>
			/// <param name="calculateFormulas" >Whether calculate it recursively if the specified reference is formula</param>
			/// <returns>"#REF!" if this area is invalid;
			/// "#N/A" if given offset out of this area;
			/// Otherwise return the cell value at given position.</returns>
			 virtual intrusive_ptr<Aspose::Cells::Systems::Object> GetValue(Aspose::Cells::Systems::Int32 rowOffset , Aspose::Cells::Systems::Int32 colOffset , bool calculateFormulas)=0;
			/// <summary>
			/// Returns the simple string representation of this area.
			/// </summary>
			/// <returns/>
			/// 
			  virtual intrusive_ptr<Aspose::Cells::Systems::String> ToString()=0;

	};
}
}
