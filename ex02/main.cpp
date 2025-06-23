/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 11:08:47 by nlewicki          #+#    #+#             */
/*   Updated: 2025/06/23 12:07:40 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#include <iostream>
#include "Array.hpp"

int main()
{
	Array<int> empty;
	std::cout << "Empty array size: " << empty.size() << std::endl;
	Array<int> arr(5);
	std::cout << "Array size: " << arr.size() << std::endl;
	for (unsigned int i = 0; i < arr.size(); i++)
		arr[i] = i * 10;
	for (unsigned int i = 0; i < arr.size(); i++)
		std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
	const Array<int> constArr = arr;
	for (unsigned int i = 0; i < constArr.size(); i++)
		std::cout << "constArr[" << i << "] = " << arr[i] << std::endl;
	Array<int> copy = arr;
	copy[0] = 999;
	std::cout << "Original[0]: " << arr[0] << ", Copy[0]: " << copy[0] << std::endl;
	try {
		std::cout << arr[10] << std::endl;
	} catch (std::exception &e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	return 0;
}
