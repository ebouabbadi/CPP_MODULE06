#include "Convert.hpp"

void print_value(std::string str)
{
	char c = str[0];
	int i = static_cast<int>(std::atoi(str.c_str()));
	std::cout << "int : " << i << std::endl;
	//<<"char : "<<str<<std::endl
	// <<"double : "<<str<<std::endl
	// <<"float : "<<str<<std::endl;
}
int main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	std::string str(av[1]);
	Convert c(str);
	if (!c.parsing())
		return (std::cout << "error!!\n", 0);
	print_value(str);
	return (0);
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     cout << static_cast<int>(12.45);
// }