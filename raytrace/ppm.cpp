#include "ppm.h"
#include "File.h"
#include <sstream>

PPm::PPm(const std::string& filename, int _columns, int _rows ) : filepath(filename), 
                 context("P3\n"),columns(_columns), rows(_rows)
{
    
}

PPm::~PPm()
{
    std::string fullpath{filepath + ".ppm"};
    FileOutput output(fullpath);
    std::ostringstream str("");
    str<<"P3\n";
    str << columns << " " << rows << "\n";

    for(int i = 0; i < 20; i++)
    {
        float ivalue = 0;
        float step = 1.0f / 20.f;
        for(int j = 0; j < 20; j++)
        {
            int val =static_cast<int> (ivalue * 255.f);
            str << val << " 0 0 "; 
            ivalue += step;
        }
        str << "\n";
    }

    context = str.str();
    output.write(const_cast<char*>(context.c_str()), context.size());
}