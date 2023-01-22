/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:02:33 by ebouabba          #+#    #+#             */
/*   Updated: 2023/01/22 11:02:34 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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