#include "Convert.hpp"
#include <sys/socket.h>

int main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	std::string str(av[1]);
	Convert c(str);
	int type = c.parsing();
	if (!str.compare("+inf") || !str.compare("-inf") || !str.compare("nan") || !str.compare("+inff") || !str.compare("-inff") || !str.compare("nanf"))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << str + "f"<< std::endl;
		std::cout << "double : " << str << std::endl;
		return (0);
	}
	if (type == 0)
		return (std::cout << "error!!\n", 0);
	else
		c.execute(type);
	return (0);
}
