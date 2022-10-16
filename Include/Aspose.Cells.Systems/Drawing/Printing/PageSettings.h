#ifndef _SYSTEM_DRAWING_PRINTING_PAGESETTINGS_H_
#define _SYSTEM_DRAWING_PRINTING_PAGESETTINGS_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/ICloneable.h"
#include "Aspose.Cells.Systems/Drawing/Printing/PaperSize.h"
#include "Aspose.Cells.Systems/Drawing/Printing/PaperSource.h"
#include "Aspose.Cells.Systems/Drawing/Printing/PrinterResolution.h"
#include "Aspose.Cells.Systems/Drawing/Printing/PrinterSettings.h"
#include "Aspose.Cells.Systems/Drawing/Printing/Margins.h"
#include "Aspose.Cells.Systems/Drawing/Rectangle.h"
using namespace Aspose::Cells::Systems;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Drawing {
				namespace Printing {
					//class PrinterSettings;
					class ASPOSE_CELLS_API PageSettings : public Object,public ICloneable
					{
					public:
						 bool color;
						 bool landscape;
						 intrusive_ptr<PaperSize> paperSize;
						 intrusive_ptr<PaperSource> paperSource;
						 intrusive_ptr<Margins> margins;
						 intrusive_ptr<PrinterResolution> printerResolution;
					//public:
						intrusive_ptr<PrinterSettings> printerSettings;
						PageSettings();
						PageSettings(intrusive_ptr<PrinterSettings> printerSettings);
						PageSettings(intrusive_ptr<PrinterSettings> printerSettings, bool color, bool landscape, intrusive_ptr<PaperSize> paperSize,
							intrusive_ptr<PaperSource> paperSource, intrusive_ptr<PrinterResolution> printerResolution);
						intrusive_ptr<PaperSize> GetPaperSize();
						void SetPaperSize(intrusive_ptr<PaperSize> value);
						intrusive_ptr<PaperSource> GetPaperSource();
						void SetPaperSource(intrusive_ptr<PaperSource> value);
						void SetMargins(intrusive_ptr<Margins> value);
						void SetLandscape(bool value);
						intrusive_ptr<PrinterSettings> GetPrinterSettings();
						intrusive_ptr<Aspose::Cells::Systems::Drawing::Rectangle> GetBounds();
						ObjectPtr Clone();
						virtual void add_ref()
						{++ref_count_;}
						virtual int release_ref()
						{return --ref_count_;}
					};
				}
			}
		}
	}
}
#endif
