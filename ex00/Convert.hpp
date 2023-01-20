#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>

enum type{
    IS_INT,
    IS_DOUBLE,
    IS_FLOAT,
    IS_CHAR,
};

class Convert
{
private:
    std::string str;
    char _Char;
    double _Double;
    int _Int;
    float _Float;
public:
    Convert();
    Convert(std::string type);
    Convert(const Convert &c);
    Convert &operator=(const Convert &c);
    ~Convert();
    int parsing();

};

#endif