#ifndef _SYSTEM_IO_DIRECTORY_H_
#define _SYSTEM_IO_DIRECTORY_H_

#include "Aspose.Cells.Systems/Object.h"
#include "Aspose.Cells.Systems/String.h"
#include "Aspose.Cells.Systems/Char.h"
#include "Aspose.Cells.Systems/Array1D.h"
#include "Aspose.Cells.Systems/IO/DirectoryInfo.h"
#include "Aspose.Cells.Systems/IO/SearchOption.h"

using namespace Aspose::Cells::Systems;

namespace Aspose {
	namespace Cells {
		namespace Systems
		{
			namespace IO
			{
				class ASPOSE_CELLS_API Directory : public Object
				{
				public:
					static bool Exists(StringPtr path);
					static DirectoryInfoPtr CreateDirectoryPal(StringPtr path);
					static intrusive_ptr<Array1D<String*>> InternalGetFileDirectoryNames(StringPtr path, StringPtr userPathOriginal, StringPtr searchPattern, bool includeFiles, bool includeDirs, SearchOption searchOption);
					static StringPtr GetDemandDir(StringPtr fullPath, bool thisDirOnly);
					static intrusive_ptr<Array1D<String*>> GetFiles(StringPtr path);
					static intrusive_ptr<Array1D<String*>> GetDirectories(StringPtr path);

				private:
					static void InternalCreateDirectory(StringPtr fullPath, StringPtr path);
					static bool InternalExists(StringPtr path);
					static StringPtr InternalGetDirectoryRoot(StringPtr path);
					static intrusive_ptr<Array1D<String*>> InternalGetFiles(StringPtr path, StringPtr searchPattern, SearchOption searchOption);
					static intrusive_ptr<Array1D<String*>> InternalGetDirectories(StringPtr path, StringPtr searchPattern, SearchOption searchOption);

				private:
					class SearchData : public Object
					{
					public:
						StringPtr _fullPath;
						StringPtr _userPath;
						SearchOption _searchOption;
						SearchData() {}
						SearchData(StringPtr fullPath, StringPtr userPath, SearchOption searchOption) {
							_fullPath = fullPath;
							_userPath = userPath;
							_searchOption = searchOption;
						}
					};
				};
				typedef intrusive_ptr<Directory> DirectoryPtr;
			}
		}
	}
}

#endif	//_SYSTEM_IO_DIRECTORY_H_
