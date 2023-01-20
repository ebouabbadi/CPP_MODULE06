#include "Convert.hpp"

Convert::Convert()
{
	this->_Char = 0;
	this->_Double = 0.0;
	this->_Float = 0.0f;
	this->_Int = 0;
	this->str = "no type";
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
	this->str = c.str;
	this->_Char = c._Char;
	this->_Double = c._Double;
	this->_Int = c._Int;
	this->_Float = c._Float;
	return (*this);
}
Convert::~Convert()
{
}

int Convert::parsing()
{
	int i = -1;
	int flag = 0;
	if (str[str.length() - 1] == '.' && str.length() > 1)
		return (0);
	while (str[++i] && str.length() != 1)
	{
		if (str[i] == '.')
			flag++;
		else if ((!isdigit(str[i]) && str[str.length() - 1] != 'f'))
			return (0);
	}
	if (flag > 1)
		return (0);
	return (1);
}