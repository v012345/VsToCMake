#ifndef _SYSTEM_ZIP_SHAREDUTILITIES_H_
#define _SYSTEM_ZIP_SHAREDUTILITIES_H_

#include "Aspose.Cells.Systems/IO/Stream.h"
#include "Aspose.Cells.Systems/DateTime.h"
#include "Aspose.Cells.Systems/Text/Encoding.h"
#include "Aspose.Cells.Systems/NotImplementedException.h"

using namespace Aspose::Cells::Systems;
using namespace Aspose::Cells::Systems::IO;
using namespace Aspose::Cells::Systems::Text;

namespace Aspose {
	namespace Cells {
		namespace Zip
		{
			class SharedUtilities
			{
			public:
				static int16_t ReadInt16(intrusive_ptr<BString> s, int32_t& index);
				static int32_t ReadInt32(intrusive_ptr<BString> s, int32_t& index);
				static int32_t ReadInt(Aspose::Cells::Systems::IO::StreamPtr s);
				static int64_t FindSignature(Aspose::Cells::Systems::IO::StreamPtr stream, int32_t SignatureToFind);
				static int32_t ReadSignature(Aspose::Cells::Systems::IO::StreamPtr s);
				static DateTimePtr PackedToDateTime(int32_t packedDateTime);
				static StringPtr Utf8StringFromBuffer(intrusive_ptr<BString> buf);
				static StringPtr StringFromBuffer(intrusive_ptr<BString> buf, Aspose::Cells::Systems::Text::EncodingPtr encoding);
				static StringPtr NormalizePathForUseInZipFile(StringPtr pathName);
				static int64_t GetFileLength(StringPtr fileName);
				static int32_t DateTimeToPacked(DateTimePtr time);

			private:
				static int32_t _ReadFourBytes(Aspose::Cells::Systems::IO::StreamPtr s, const char* message);
			};

			class CountingStream : public Stream
			{
			public:
				CountingStream(Aspose::Cells::Systems::IO::StreamPtr s) {
					_s = s;
					_bytesWritten = 0;
					_bytesRead = 0;
					try
					{
						_initialOffset = _s->GetPosition();
					}
					catch (...)
					{
						_initialOffset = 0L;
					}
				}
				virtual ~CountingStream() {
				}

				Aspose::Cells::Systems::IO::StreamPtr GetWrappedStream() { return _s; }
				int64_t GetBytesWritten() { return _bytesWritten; }
				int64_t GetBytesRead() { return _bytesRead; }
				void	Adjust(int64_t delta) {
					_bytesWritten -= delta;
					if (_bytesWritten < 0)
						throw InvalidOperationException("Adjust");
					if (dynamic_pointer_cast<CountingStream>(_s) != NULL)
						(dynamic_pointer_cast<CountingStream>(_s))->Adjust(delta);
				}

				int64_t GetComputedPosition() {
					return _initialOffset + _bytesWritten;
				}

				int32_t Read(intrusive_ptr<BString> buffer, int32_t offset, int32_t count) {
					int32_t n = _s->Read(buffer, offset, count);
					_bytesRead += n;
					return n;
				}
				void Write(intrusive_ptr<BString> buffer, int32_t offset, int32_t count) {
					if (count == 0)
						return;
					_s->Write(buffer, offset, count);
					_bytesWritten += count;
				}

				bool CanRead() { return _s->CanRead(); }
				bool CanWrite() { return _s->CanWrite(); }
				bool CanSeek() { return _s->CanSeek(); }

				int64_t GetLength() { return _s->GetLength(); }
				void SetLength(int64_t length) { _s->SetLength(length); }

				int64_t GetPosition() { return _s->GetPosition(); }
				void SetPosition(int64_t position) { _s->Seek(position, SeekOrigin_Begin); }

				int32_t ReadByte() { throw NotImplementedException(); }
				void WriteByte(uint8_t value) { throw NotImplementedException(); }

				int64_t Seek(int64_t offset, SeekOrigin origin) { return  _s->Seek(offset, origin); }

				void Flush() { _s->Flush(); }

			private:
				Aspose::Cells::Systems::IO::StreamPtr		_s;
				int64_t		_bytesWritten;
				int64_t		_bytesRead;
				int64_t		_initialOffset;
			};
		}
	}
}
#endif//_SYSTEM_ZIP_SHAREDUTILITIES_H_
