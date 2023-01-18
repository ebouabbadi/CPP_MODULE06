#include "Convert.hpp"

convert::convert()
{
}

convert::convert(std::string type)
{
}

convert::convert(const convert &c)
{
    *this = c;
}

convert &convert::operator=(const convert &c)
{
    if (this == &c)
        return (*this);
    return (*this);
}
convert::~convert()
{
}