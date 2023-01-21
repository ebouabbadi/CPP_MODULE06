#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <iomanip>

enum type
{
    IS_INT = 3,
    IS_DOUBLE,
    IS_FLOAT,
    IS_CHAR,
};

class Convert
{
private:
    std::string str;

public:
    Convert();
    Convert(std::string type);
    Convert(const Convert &c);
    Convert &operator=(const Convert &c);
    ~Convert();
    int parsing();
    int execute(int type);
};

#endif