#include "File.h"

FileInput::FileInput(const std::string& filename) : _is(new std::ifstream (filename))
{

}

FileInput::~FileInput()
{
    delete _is;
}


bool FileInput::Read(char c[/*n*/], int n)
{
    _is->read (c, n);
    return true;
}


Int64 FileInput::Tellg()
{
    return std::streamoff (_is->tellg());
}

void FileInput::Seekg(Int64 pos)
{
    _is->seekg (pos);
}




FileOutput::FileOutput(const std::string& filename): _os(new std::ofstream (filename))
{

}
FileOutput::~FileOutput()
{
    delete _os;
}

bool FileOutput::write(char c[/*n*/], int n)
{
    _os->write(c, n);
    return true;
}



Int64 FileOutput::Tellg()
{
    return std::streamoff (_os->tellp());
}

void FileOutput::Seekg(Int64 pos)
{
    _os->seekp (pos);
}