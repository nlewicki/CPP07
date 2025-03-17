/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 11:09:06 by nlewicki          #+#    #+#             */
/*   Updated: 2025/03/17 11:14:13 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	private:
		T		*_array;
		size_t	_size;

	public:
		// Constructors
		Array();
		Array(unsigned int n);
		Array(Array const &src);

		// Destructor
		~Array();

		// Operator "=" overload
		Array	&operator=(Array const &src);

		// Operator "[]" overload
		T		&operator[](unsigned int i);

		// Getters
		size_t	size(void) const;

		// Exceptions
		class OutOfBoundsException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

#include "Array.tpp"

#endif
