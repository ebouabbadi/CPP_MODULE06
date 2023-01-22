/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebouabba <ebouabba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:28:38 by ebouabba          #+#    #+#             */
/*   Updated: 2023/01/22 11:38:56 by ebouabba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <stdlib.h>
#include <exception>
#include <iostream>

Base *generate(void)
{
    time_t TimE;
    TimE = time(0) % 3;
    switch (TimE)
    {
    case 0:
        return new A();
    case 1:
        return new B();
    case 2:
        return new C();
    }
    return nullptr;
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "HI MY NAME 'A'\n";
    else if (dynamic_cast<B *>(p))
        std::cout << "HI MY NAME 'B'\n";
    else if (dynamic_cast<C *>(p))
        std::cout << "HI MY NAME 'C'\n";
    else
        std::cout << "BASE is nullptr\n";
}

void identify(Base &p1)
{
    try
    {
        A Derived_A = dynamic_cast<A &>(p1);
        std::cout << "HI MY NAME 'A'\n";
    }
    catch (...)
    {
    }
    try
    {
        B Derived_B = dynamic_cast<B &>(p1);
        std::cout << "HI MY NAME 'B'\n";
    }
    catch (...)
    {
    }
    try
    {
        C Derived_C = dynamic_cast<C &>(p1);
        std::cout << "HI MY NAME 'C'\n";
    }
    catch (...)
    {
    }
}

int main()
{
    Base *base = generate();
    if (!base)
        exit(1);
    identify(base);
    identify(*base);
}
