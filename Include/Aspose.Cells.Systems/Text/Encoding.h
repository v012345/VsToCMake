#ifndef _SYSTEM_TEXT_ENCODING_H_
#define _SYSTEM_TEXT_ENCODING_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/Text/Encoder.h"
#include "Aspose.Cells.Systems/Text/Decoder.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/Byte.h"
#include "Aspose.Cells.Systems/Int32.h"
#include "Aspose.Cells.Systems/Collections/Hashtable.h"
#ifdef _DEBUG
#include "Aspose.Cells.Systems/Console.h"
#endif
using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::Collections;

namespace Aspose {
	namespace Cells {
		namespace Systems {
			namespace Text {

				class DecoderNLS;
				class EncoderNLS;

				class ASPOSE_CELLS_API Encoding : public Object
				{
				public:
					virtual ~Encoding();

					virtual Aspose::Cells::Systems::Text::DecoderPtr GetDecoder() = 0;
					virtual Aspose::Cells::Systems::Text::EncoderPtr GetEncoder() = 0;
					virtual int32_t GetMaxCharCount(int32_t byteCount) = 0;
					virtual int32_t GetMaxByteCount(int32_t charCount) = 0;

					virtual int32_t GetCharCount(intrusive_ptr<BString> bytes);
					virtual int32_t GetCharCount(intrusive_ptr<BString> bytes, int32_t index, int32_t count) = 0;
					virtual int32_t GetCharCount(Byte* bytes, int32_t count);
					virtual int32_t GetCharCount(Byte* bytes, int32_t count, intrusive_ptr<DecoderNLS> decoder);

					virtual intrusive_ptr<CString> GetChars(intrusive_ptr<BString> bytes);
					virtual intrusive_ptr<CString> GetChars(intrusive_ptr<BString> bytes, int32_t index, int32_t count);
					virtual int32_t GetChars(intrusive_ptr<BString> bytes, int byteIndex, int byteCount, intrusive_ptr<CString> chars, int charIndex) = 0;
					virtual int32_t GetChars(Byte* bytes, int32_t byteCount, Char* chars, int32_t charCount);
					virtual int32_t GetChars(Byte* bytes, int32_t byteCount, Char* chars, int32_t charCount, intrusive_ptr<DecoderNLS> decoder);

					virtual int32_t GetByteCount(intrusive_ptr<CString> chars);
					virtual int32_t GetByteCount(StringPtr s);
					virtual int32_t GetByteCount(intrusive_ptr<CString> chars, int32_t index, int32_t count) = 0;
					virtual int32_t GetByteCount(Char* chars, int32_t count);
					virtual int32_t GetByteCount(Char* chars, int32_t count, intrusive_ptr<EncoderNLS> encoder);

					virtual intrusive_ptr<BString> GetBytes(intrusive_ptr<CString> chars);
					virtual intrusive_ptr<BString> GetBytes(intrusive_ptr<CString> chars, int32_t index, int32_t count);
					virtual int32_t GetBytes(intrusive_ptr<CString> chars, int32_t charIndex, int32_t charCount, intrusive_ptr<BString> bytes, int32_t byteIndex) = 0;
					virtual intrusive_ptr<BString> GetBytes(StringPtr s);
					virtual int32_t GetBytes(StringPtr s, int32_t charIndex, int32_t charCount, intrusive_ptr<BString> bytes, int32_t byteIndex);
					virtual int32_t GetBytes(Char* chars, int32_t charCount, Byte* bytes, int32_t byteCount, intrusive_ptr<EncoderNLS> encoder);
					virtual int32_t GetBytes(Char* chars, int32_t charCount, Byte* bytes, int32_t byteCount);

					virtual StringPtr GetString(intrusive_ptr<BString> bytes);
					virtual StringPtr GetString(intrusive_ptr<BString> bytes, Int32 index, Int32 count);
					virtual intrusive_ptr<BString> GetPreamble();
					virtual int GetCodePage();

					virtual StringPtr GetWebName();


					static intrusive_ptr<Encoding> GetUnicode();
					static intrusive_ptr<Encoding> GetBigEndianUnicode();
					static intrusive_ptr<Encoding> GetEncoding(Int32 codepage);
					static intrusive_ptr<Encoding> GetEncoding(StringPtr name);
					static intrusive_ptr<Encoding> GetDefault();
					static intrusive_ptr<Encoding> GetASCII();
					static intrusive_ptr<Encoding> GetUTF8();
					static intrusive_ptr<Encoding> GetICUEncoding(int codePage);

				protected:
					Encoding();
					Encoding(int32_t codePage);

				protected:
					int32_t		m_codePage;
					static intrusive_ptr<BString> emptyByteArray;

				private:
					static intrusive_ptr<Encoding> unicodeEncoding;
					static intrusive_ptr<Encoding> bigEndianUnicode;
					static intrusive_ptr<Encoding> asciiEncoding;
					static intrusive_ptr<Encoding> utf8Encoding;
					static HashtablePtr encodings;
				};
				typedef intrusive_ptr<Encoding>  EncodingPtr;

			}	// namespace Text
		}	// namespace Systems
	}
}
#endif	// _SYSTEM_TEXT_ENCODING_H_