#include "Aspose.Cells.h"
#include <iostream>
#include <string>
#include <sys/stat.h>
#include <direct.h>
bool IsPathExist(const std::string &s)
{
    struct stat buffer;
    return (stat(s.c_str(), &buffer) == 0);
}

int main(int argc, char const *argv[])
{
    StringPtr sourcePath = new String("xls\\");
    StringPtr resultPath = new String("xlsx\\");
    struct stat buffer;
    // boost::filesystem::path("xlsx")
    if (stat("xlsx", &buffer) != 0)
    {
        std::cout << "'Hello' directory doesn't exist" << std::endl;
        mkdir("xlsx");
    }

    for (int i = 1; i < argc; i++)
    {
        std::string input = argv[i];
        std::cout << input << std::endl;
        intrusive_ptr<IWorkbook> wb = Factory::CreateIWorkbook(sourcePath->StringAppend(new String("example.xls")));
        wb->Save(resultPath->StringAppend(new String("example.xlsx")));
    }
    return 0;
}
