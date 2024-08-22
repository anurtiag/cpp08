/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anurtiag <anurtiag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:37:55 by anurtiag          #+#    #+#             */
/*   Updated: 2024/08/22 15:25:16 by anurtiag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <algorithm>
# include <exception>
# include <vector>
# include <list>
# include <iterator>

# include "MyException.hpp"

template <typename T> int easyfind(T& container, int n)
{
    typename T::iterator pos = std::find(container.begin(), container.end(), n);
    if(pos == container.end())
        throw MyException();
    return(*pos);
}


#endif