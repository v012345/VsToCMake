#pragma once
#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/IO/Stream.h"
#include "Aspose.Cells.Systems/String.h"
#include "SaveFormat.h"
#include "FileFormatType.h"
#include "LoadFormat.h"

namespace Aspose {
	namespace Cells {
		class IFileFormatInfo;
		enum SaveFormat;
		enum FileFormatType;
		enum LoadFormat;
	}
}
namespace Aspose{
namespace Cells{
			/// <summary>
			/// Provides utility methods for working with file formats, such as detecting file format or converting file extensions to/from file format enums.
			/// </summary>
	class ASPOSE_CELLS_API IFileFormatUtil : public Aspose::Cells::Systems::Object
	{
		public:
public:
			/// <summary>
			/// Detects and returns the information about a format of an excel stored in a stream. 
			/// </summary>
			/// <param name="stream" />
			/// 
			/// <returns>A <see cref="IFileFormatInfo" />
			///  object that contains the detected information.</returns>
			static  intrusive_ptr<Aspose::Cells::IFileFormatInfo> 		DetectFileFormat(intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream);
			/// <summary>
			/// Detects and returns the information about a format of an excel stored in a stream. 
			/// </summary>
			/// <param name="stream" />
			/// 
			/// <param name="password" >The password for encrypted ooxml files.</param>
			/// <returns>A <see cref="IFileFormatInfo" />
			///  object that contains the detected information.</returns>
			static  intrusive_ptr<Aspose::Cells::IFileFormatInfo> 		DetectFileFormat(intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream , intrusive_ptr<Aspose::Cells::Systems::String> password);
			/// <summary>
			/// Detects and returns the information about a format of an excel stored in a stream. 
			/// </summary>
			/// <param name="stream" />
			/// 
			/// <param name="password" >The password for encrypted ooxml files.</param>
			/// <returns>Returns whether the password is corrected.</returns>
			static  bool 		VerifyPassword(intrusive_ptr<Aspose::Cells::Systems::IO::Stream> stream , intrusive_ptr<Aspose::Cells::Systems::String> password);
			/// <summary>
			/// Detects and returns the information about a format of an excel stored in a file. 
			/// </summary>
			/// <param name="filePath" >The file path.</param>
			/// <returns>A <see cref="IFileFormatInfo" />
			///  object that contains the detected information.</returns>
			static  intrusive_ptr<Aspose::Cells::IFileFormatInfo> 		DetectFileFormat(intrusive_ptr<Aspose::Cells::Systems::String> filePath);
			/// <summary>
			/// Detects and returns the information about a format of an excel stored in a file. 
			/// </summary>
			/// <param name="filePath" >The file path.</param>
			/// <param name="password" >The password for encrypted ooxml files.</param>
			/// <returns>A <see cref="IFileFormatInfo" />
			///  object that contains the detected information.</returns>
			static  intrusive_ptr<Aspose::Cells::IFileFormatInfo> 		DetectFileFormat(intrusive_ptr<Aspose::Cells::Systems::String> filePath , intrusive_ptr<Aspose::Cells::Systems::String> password);
			/// <summary>
			/// Converting file format to save format.
			/// </summary>
			/// <param name="format" >The file format type.</param>
			/// <returns/>
			/// 
			static  Aspose::Cells::SaveFormat 		FileFormatToSaveFormat(Aspose::Cells::FileFormatType format);
			/// <summary>
			/// Converts a file name extension into a SaveFormat value.
			/// </summary>
			/// <param name="extension" >The file extension. Can be with or without a leading dot. Case-insensitive.</param>
			/// <returns/>
			/// 
			/// <remarks>If the extension cannot be recognized, returns <see cref="SaveFormat.Unknown" />
			/// .</remarks>
			static  Aspose::Cells::SaveFormat 		ExtensionToSaveFormat(intrusive_ptr<Aspose::Cells::Systems::String> extension);
			/// <summary>
			/// Returns true if the extension is .xlt, .xltX, .xltm,.ots.
			/// </summary>
			/// <param name="extension" />
			/// 
			/// <returns/>
			/// 
			static  bool 		IsTemplateFormat(intrusive_ptr<Aspose::Cells::Systems::String> extension);
			/// <summary>
			/// Converts a load format enumerated value into a file extension.
			/// </summary>
			/// <param name="loadFormat" >The loaded file format.</param>
			/// <returns> The returned extension is a lower-case string with a leading dot.</returns>
			/// <remarks>If it can not be converted, returns null.</remarks>
			static  intrusive_ptr<Aspose::Cells::Systems::String> 		LoadFormatToExtension(Aspose::Cells::LoadFormat loadFormat);
			/// <summary>
			/// Converts a LoadFormat value to a SaveFormat value if possible. 
			/// </summary>
			/// <param name="loadFormat" >The load format.</param>
			/// <returns>The save format.</returns>
			static  Aspose::Cells::SaveFormat 		LoadFormatToSaveFormat(Aspose::Cells::LoadFormat loadFormat);
			/// <summary>
			/// Converts a save format enumerated value into a file extension.
			/// </summary>
			/// <param name="format" >The save format.</param>
			/// <returns>The returned extension is a lower-case string with a leading dot. </returns>
			static  intrusive_ptr<Aspose::Cells::Systems::String> 		SaveFormatToExtension(Aspose::Cells::SaveFormat format);
			/// <summary>
			/// Converts a SaveFormat value to a LoadFormat value if possible. 
			/// </summary>
			/// <param name="saveFormat" >The save format.</param>
			/// <returns>The load format</returns>
			static  Aspose::Cells::LoadFormat 		SaveFormatToLoadFormat(Aspose::Cells::SaveFormat saveFormat);

	};
}
}
