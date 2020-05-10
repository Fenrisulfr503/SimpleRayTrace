#pragma once

#include <string>
#include <fstream>

using Int64 = unsigned long long;

class FileInput
{
public:
    FileInput(const std::string& filename);
    ~FileInput();

    bool Read(char c[/*n*/], int n);


    Int64 Tellg();
    void Seekg(Int64 pos);

private:
    std::ifstream *	_is;
};


class FileOutput
{
    
public:
    FileOutput(const std::string& filename);
    ~FileOutput();

    bool write(char c[/*n*/], int n);

    Int64 Tellg();
    void Seekg(Int64 pos);

private:
    std::ofstream * _os;

};