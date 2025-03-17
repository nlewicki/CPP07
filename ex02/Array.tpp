/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 11:09:13 by nlewicki          #+#    #+#             */
/*   Updated: 2025/03/17 11:24:57 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

# include "Array.hpp"

// Constructors
template <typename T>
Array<T>::Array() : _array(NULL), _size(0)
{
	std::cout << "Array default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	_array = new T[n]();
}

template <typename T>
Array<T>::Array(Array const &src) : _array(NULL), _size(0)
{
	*this = src;
}

// Destructor
template <typename T>
Array<T>::~Array()
{
	if (_array)
		delete[] _array;
}

// Operator "=" overload
template <typename T>
Array<T> &Array<T>::operator=(Array const &src)
{
	if (this != &src)
	{
		if (_array != NULL)
			delete[] _array;

		_size = src._size;
		if (_size > 0)
		{
			_array = new T[_size]();
			for (size_t i = 0; i < _size; i++)
				_array[i] = src._array[i];
		}
		else
			_array = NULL;
	}
	return *this;
}

// Operator "[]" overload
template <typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw OutOfBoundsException();
	return _array[i];
}

// Getters
template <typename T>
size_t	Array<T>::size(void) const
{
	return _size;
}

// Exceptions
template <typename T>
const char *Array<T>::OutOfBoundsException::what() const throw()
{
	return "Index is out of bounds";
}

#endif
