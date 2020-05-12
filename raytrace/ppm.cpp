#include "ppm.h"
#include "File.h"

#include <sstream>

PPm::PPm(const std::string& filename, int _columns, int _rows ) : filepath(filename), 
                 context(""),columns(_columns), rows(_rows)
{

    std::ostringstream str("");
    str <<"P3\n";
    str << columns << " " << rows << "\n255\n";
    context += str.str();
}

PPm::~PPm()
{
    std::string fullpath{filepath + ".ppm"};
    FileOutput output(fullpath);
    output.write(const_cast<char*>(context.c_str()), int(context.size()));

}

void PPm::AppendContent( std::string& content)
{
    context += content;
}