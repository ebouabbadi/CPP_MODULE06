#include "Convert.hpp"

Convert::Convert()
{
    this->_Char = 0;
    this->_Double = 0.0;
    this->_Float = 0.0f;
    this->_Int = 0;
    this->str = "wtf";
}

Convert::Convert(std::string type)
{
     this->_Char = 0;
    this->_Double = 0.0;
    this->_Float = 0.0f;
    this->_Int = 0;
    this->str = type;
}

Convert::Convert(const Convert &c)
{
    *this = c;
}

Convert &Convert::operator=(const Convert &c)
{
    if (this == &c)
        return (*this);
    return (*this);
}
Convert::~Convert()
{
}

int ft_isdigit(int c)
{
	if ((c >= '0' && c <= '9') || (c == '.'))
		return (1);
	else
		return (0);
}

int Convert::parsing()
{
	int i = 0;
	if (str[str.length() - 1] == '.' && str.length() > 1)
		return (0);
	while (str[i] && str.length() != 1)
	{
		if (!ft_isdigit(str[i]) && str[str.length() - 1] != 'f')
			return (0);
		i++;
	}
	i = 0;
	int flag = 0;
	while (str[i])
	{
		if (str[i] == '.')
			flag++;
		i++;
	}
	if (flag > 1)
		return (0);
	return (1);
}