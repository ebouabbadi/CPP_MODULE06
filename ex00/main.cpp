/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:02:36 by ebouabba          #+#    #+#             */
/*   Updated: 2023/01/22 11:02:37 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <sys/socket.h>

int main(int ac, char **av)
{
	if (ac != 2)
		return (0);
	std::string str(av[1]);
	Convert c(str);
	int type = c.parsing();
	if (!str.compare("+inf") || !str.compare("-inf"))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << str + "f" << std::endl;
		std::cout << "double : " << str << std::endl;
		return (0);
	}
	else if (!str.compare("nan"))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << str + "f" << std::endl;
		std::cout << "double : " << str << std::endl;
		return (0);
	}
	else if (!str.compare("nanf"))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << str << std::endl;
		std::cout << "double : "
				  << "nan" << std::endl;
		return (0);
	}
	else if (!str.compare("-inff") || !str.compare("+inff"))
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << str << std::endl;
		std::cout << "double : " << str[0] << "inf" << std::endl;
		return (0);
	}
	if (type == 0)
		return (std::cout << "Error D'argumment!!\n", 0);
	else
		c.execute(type);
	return (0);
}
