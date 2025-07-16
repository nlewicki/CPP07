/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 11:03:41 by nlewicki          #+#    #+#             */
/*   Updated: 2025/07/16 09:55:10 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *array, size_t size, void (*f)(T const &))
{
	for (size_t i = 0; i < size; i++)
		f(array[i]);
};

template <typename T>
void	print(T const &i)
{
	std::cout << i<< std::endl;
};

#endif
