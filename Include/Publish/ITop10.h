#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Int32.h"

namespace Aspose{
namespace Cells{
			/// <summary>
			/// Describe the Top10 conditional formatting rule. 
			/// This conditional formatting rule highlights cells whose
			/// values fall in the top N or bottom N bracket, as specified.
			/// </summary>
	class ASPOSE_CELLS_API ITop10 : public Aspose::Cells::Systems::Object
	{
		public:
			/// <summary>
			/// Get the flag indicating whether a "top/bottom n" rule is a "top/bottom n percent" rule.
			/// Default value is false.
			/// </summary>
			 virtual bool IsPercent()=0;
			/// <summary>
			/// Set the flag indicating whether a "top/bottom n" rule is a "top/bottom n percent" rule.
			/// Default value is false.
			/// </summary>
			 virtual void SetPercent(bool value)=0;
			/// <summary>
			/// Get the flag indicating whether a "top/bottom n" rule is a "bottom n" rule. '1' indicates 'bottom'.
			/// Default value is false.
			/// </summary>
			 virtual bool IsBottom()=0;
			/// <summary>
			/// Set the flag indicating whether a "top/bottom n" rule is a "bottom n" rule. '1' indicates 'bottom'.
			/// Default value is false.
			/// </summary>
			 virtual void SetBottom(bool value)=0;
			/// <summary>
			/// Get the value of "n" in a "top/bottom n" conditional formatting rule.
			/// If IsPercent() is true, the value must between 0 and 100.
			/// Otherwise it must between 0 and 1000.
			/// Default value is 10.
			/// </summary>
			 virtual Aspose::Cells::Systems::Int32 GetRank()=0;
			/// <summary>
			/// Set the value of "n" in a "top/bottom n" conditional formatting rule.
			/// If IsPercent() is true, the value must between 0 and 100.
			/// Otherwise it must between 0 and 1000.
			/// Default value is 10.
			/// </summary>
			 virtual void SetRank(Aspose::Cells::Systems::Int32 value)=0;

	};
}
}
