/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 07:33:04 by anurtiag          #+#    #+#             */
/*   Updated: 2024/08/22 15:18:40 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

void ft_vector()
{
    try
    {
        std::vector<int> vec;
        for(int i = 0; i < 10; i++)
            vec.push_back(i);
        int n = easyfind(vec, 3);
        std::cout << n << std::endl;
        int n1 = easyfind(vec, -3);
        std::cout << n1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}

void ft_list()
{
    try
    {
        std::list<int> l;
        for(int i = 0; i < 10; i++)
            l.push_back(i);
        int n = easyfind(l, 5);
        std::cout << n << std::endl;
        int n1 = easyfind(l, -3);
        std::cout << n1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

int main()
{
    ft_vector();
    ft_list();
    return(0);
}