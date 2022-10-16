#ifndef _SYSTEM_DRAWING_PRINTING_PRINTCTRL_H_
#define _SYSTEM_DRAWING_PRINTING_PRINTCTRL_H_

#include "Aspose.Cells.Systems/Object.h"
//#include "PrintDocument.h"
#include "PrintEventArgs.h"
#include "PrintPageEventArgs.h"
#include "Aspose.Cells.Systems/Drawing/Graphics.h"
using namespace Aspose::Cells::Systems;
namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Drawing {
				namespace Printing {
					class PrintDocument;
					class ASPOSE_CELLS_API PrintController : public Object
					{
					public:
						virtual void OnStartPrint(PrintDocument* document, intrusive_ptr<PrintEventArgs> e){}
						virtual void OnEndPrint(PrintDocument* document, intrusive_ptr<PrintEventArgs> e){}
						virtual intrusive_ptr<Graphics> OnStartPage(PrintDocument* document, intrusive_ptr<PrintPageEventArgs> e)
						{return NULL;}
						virtual void OnEndPage(PrintDocument* document, intrusive_ptr<PrintPageEventArgs> e){}
						virtual ~PrintController(){};

					};
				}
			}
		}
	}
}
#endif
