#ifndef _SYSTEM_ZIP_CRCCALCULATORSTREAM_H_
#define _SYSTEM_ZIP_CRCCALCULATORSTREAM_H_

#include "Aspose.Cells.Systems/IO/Stream.h"
#include "Aspose.Cells.Systems/NotImplementedException.h"
#include "Aspose.Cells.Systems/Zip/CRC32.h"

using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::IO;

namespace Aspose {
	namespace Cells {
		namespace Zip
		{
			class CrcCalculatorStream : public Stream
			{
			public:
				CrcCalculatorStream(bool leaveOpen, int64_t length, Aspose::Cells::Systems::IO::StreamPtr stream, intrusive_ptr<CRC32> crc32);
				CrcCalculatorStream(Aspose::Cells::Systems::IO::StreamPtr stream);
				CrcCalculatorStream(Aspose::Cells::Systems::IO::StreamPtr stream, bool leaveOpen);
				CrcCalculatorStream(Aspose::Cells::Systems::IO::StreamPtr stream, int64_t length);
				CrcCalculatorStream(Aspose::Cells::Systems::IO::StreamPtr stream, int64_t length, bool leaveOpen);
				virtual ~CrcCalculatorStream();

				int64_t	GetTotalBytesSlurped();
				int32_t GetCrc();
				bool	GetLeaveOpen();
				void	SetLeaveOpen(bool value);

				int32_t Read(intrusive_ptr<BString> buffer, int32_t offset, int32_t count);
				void Write(intrusive_ptr<BString> buffer, int32_t offset, int32_t count);

				bool CanRead() { return _innerStream->CanRead(); }
				bool CanWrite() { return _innerStream->CanWrite(); }
				bool CanSeek() { return false; }
				void Flush() { _innerStream->Flush(); }

				int64_t GetLength();
				void SetLength(int64_t length) { throw NotImplementedException(); }

				int64_t GetPosition() { return _Crc32->GetTotalBytesRead(); }
				void SetPosition(int64_t position) { throw NotImplementedException(); }


				int32_t ReadByte() { throw NotImplementedException(); }
				void WriteByte(uint8_t value) { throw NotImplementedException(); }

				int64_t Seek(int64_t offset, SeekOrigin origin) { throw NotImplementedException(); }

				void Close();
				void Dispose() { Close(); }

			private:
				bool		_leaveOpen;
				Aspose::Cells::Systems::IO::StreamPtr		_innerStream;
				intrusive_ptr<CRC32>		_Crc32;
				int64_t		_lengthLimit;

				static const int64_t UnsetLengthLimit = -99;
			};
		}
	}
}
#endif//_SYSTEM_ZIP_CRCCALCULATORSTREAM_H_
