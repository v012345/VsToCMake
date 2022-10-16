#ifndef _SYSTEM_DRAWING_RECTANGLEF_H_
#define _SYSTEM_DRAWING_RECTANGLEF_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Single.h"
#include "Aspose.Cells.Systems/Drawing/PointF.h"
#include "Aspose.Cells.Systems/Drawing/SizeF.h"
#include "Aspose.Cells.Systems/String.h"

using namespace Aspose::Cells::Systems;

namespace Aspose { 
	namespace Cells { 
		namespace Systems {
			namespace Drawing {
				class ASPOSE_CELLS_API RectangleF : public Object
				{
					private:
						float x;
						float y;
						float width;
						float height;
						bool  IntersectsWithInclusive(intrusive_ptr<RectangleF> r);
					public:
						static intrusive_ptr<RectangleF> Empty;
						RectangleF();
						RectangleF(intrusive_ptr<PointF> location, intrusive_ptr<SizeF> size);
						RectangleF(Single x1, Single y1, Single width1, Single height1);
			
					public:
						static intrusive_ptr<RectangleF> FromLTRB(Single left, Single top, Single right, Single bottom);
						static intrusive_ptr<RectangleF> Inflate(intrusive_ptr<RectangleF> rect, Single x, Single y);
						static intrusive_ptr<RectangleF> Union(intrusive_ptr<RectangleF> a, intrusive_ptr<RectangleF> b);
						void Intersect(intrusive_ptr<RectangleF> rect);
						static intrusive_ptr<RectangleF> Intersect(intrusive_ptr<RectangleF> a, intrusive_ptr<RectangleF> b);
						Single GetHeight();
						void SetHeight(Single value);
						intrusive_ptr<PointF> GetLocation();
						void SetLocation(intrusive_ptr<PointF> point);
						intrusive_ptr<SizeF> GetSize();
						void SetSize(intrusive_ptr<SizeF> size);
						Single GetWidth();
						void SetWidth(Single value);
						Single GetX();
						void SetX(Single value);
						Single GetY();
						void SetY(Single value);
						Single GetLeft();
						Single GetRight();
						Single GetTop();
						Single GetBottom();
						bool IsEmpty();

						void Inflate(Single x, Single y);
						void Inflate(intrusive_ptr<SizeF> size);

						
					public:
						bool Equals(ObjectPtr obj);
						static bool Equals(intrusive_ptr<RectangleF> v1, intrusive_ptr<RectangleF> v2);
						int GetHashCode();
						StringPtr ToString();
						bool IntersectsWith(intrusive_ptr<RectangleF> rect);

				};
				typedef intrusive_ptr<RectangleF> RectangleFPtr;
			}
		}
	}
}
#endif//_SYSTEM_DRAWING_RECTANGLEF_H_