#include "File.h"
#include <iostream>

bool WriteFileTest()
{
    bool state = true;
    const char* path = "test_fileio.txt";

    FileOutput output(path);

    std::string context{"Name:Fenrisulfr"};

    output.write(const_cast<char*>(context.c_str()), context.size() );

    return true;
}


bool ReadFileTest()
{
    bool state = true;

    const char* path = "test_fileio.txt";
    FileInput input(path);

    char* getName = new char[5];

    input.Read(getName, 5);

    delete [] getName;
    return true;
}

