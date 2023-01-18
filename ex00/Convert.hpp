#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
class convert
{
private:
    char _Char;
    double _Double;
    int _Int;
    float _Float;
public:
    convert();
    convert(std::string type);
    convert(const convert &c);
    convert &operator=(const convert &c);
    ~convert();
};

#endif