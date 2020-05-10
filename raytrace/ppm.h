#pragma once

#include <string>

class PPm
{
public:

    PPm(const std::string& filename, int _columns, int _rows);
    ~PPm();

    void AppendLine();

private:
    std::string filepath;
    std::string context;

    int columns;
    int rows;
};