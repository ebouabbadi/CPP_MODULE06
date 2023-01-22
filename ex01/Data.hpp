/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:02:46 by ebouabba          #+#    #+#             */
/*   Updated: 2023/01/22 11:02:47 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>

typedef struct t_Data
{
    std::string first_name;
    std::string last_name;
    int id;
    double score;
}Data;

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);

#endif