/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 11:08:47 by nlewicki          #+#    #+#             */
/*   Updated: 2025/03/17 11:31:28 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#include <iostream>
#include "Array.hpp"

#define RESET   "\033[0m"
#define GREEN   "\033[32m"
#define RED     "\033[31m"

void testDefaultConstructor()
{
	std::cout << GREEN << "\n[TEST] Default Constructor (Empty Array)" << RESET << std::endl;
	Array<int> arr;
	std::cout << "Size: " << arr.size() << " (Expected: 0)" << std::endl;
}

void testParamConstructor()
{
	std::cout << GREEN << "\n[TEST] Parameterized Constructor" << RESET << std::endl;
	Array<int> arr(5);
	std::cout << "Size: " << arr.size() << " (Expected: 5)" << std::endl;

	// Print default values
	for (unsigned int i = 0; i < arr.size(); i++)
		std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
}

void testOutOfBounds()
{
	std::cout << GREEN << "\n[TEST] Out of Bounds Access" << RESET << std::endl;
	Array<int> arr(5);
	try {
		std::cout << arr[10] << std::endl;
	} catch (std::exception &e) {
		std::cout << RED << "Exception caught: " << e.what() << RESET << std::endl;
	}
}

void testCopyConstructor()
{
	std::cout << GREEN << "\n[TEST] Copy Constructor" << RESET << std::endl;
	Array<int> original(3);
	original[0] = 42;
	original[1] = 21;
	original[2] = 84;

	Array<int> copy = original; // Copy constructor

	std::cout << "Original[0]: " << original[0] << " | Copy[0]: " << copy[0] << std::endl;

	copy[0] = 99; // Modify copy, should not affect original
	std::cout << "After modification:\n";
	std::cout << "Original[0]: " << original[0] << " (Expected: 42)" << std::endl;
	std::cout << "Copy[0]: " << copy[0] << " (Expected: 99)" << std::endl;
}

void testAssignmentOperator()
{
	std::cout << GREEN << "\n[TEST] Assignment Operator" << RESET << std::endl;
	Array<int> arr1(2);
	arr1[0] = 1;
	arr1[1] = 2;

	Array<int> arr2;
	arr2 = arr1; // Assignment operator

	std::cout << "arr1[0]: " << arr1[0] << " | arr2[0]: " << arr2[0] << std::endl;

	arr2[0] = 100; // Modify arr2, should not affect arr1
	std::cout << "After modification:\n";
	std::cout << "arr1[0]: " << arr1[0] << " (Expected: 1)" << std::endl;
	std::cout << "arr2[0]: " << arr2[0] << " (Expected: 100)" << std::endl;
}

void testWithDifferentTypes()
{
	std::cout << GREEN << "\n[TEST] Array with Different Data Types" << RESET << std::endl;

	Array<double> dArr(3);
	dArr[0] = 3.14;
	dArr[1] = 2.71;
	dArr[2] = 1.618;
	std::cout << "Double Array: ";
	for (unsigned int i = 0; i < dArr.size(); i++)
		std::cout << dArr[i] << " ";
	std::cout << std::endl;

	Array<std::string> sArr(2);
	sArr[0] = "Hello";
	sArr[1] = "World";
	std::cout << "String Array: ";
	for (unsigned int i = 0; i < sArr.size(); i++)
		std::cout << sArr[i] << " ";
	std::cout << std::endl;
}

int main()
{
	testDefaultConstructor();
	testParamConstructor();
	testOutOfBounds();
	testCopyConstructor();
	testAssignmentOperator();
	testWithDifferentTypes();

	return 0;
}


// #define MAX_VAL 750

// int main(int, char**)
// {
// 	Array<int> numbers(MAX_VAL);
// 	int* mirror = new int[MAX_VAL];
// 	srand(time(NULL));
// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		const int value = rand();
// 		numbers[i] = value;
// 		mirror[i] = value;
// 	}
// 	//SCOPE
// 	{
// 		Array<int> tmp = numbers;
// 		Array<int> test(tmp);
// 	}

// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		if (mirror[i] != numbers[i])
// 		{
// 			std::cerr << "didn't save the same value!!" << std::endl;
// 			return 1;
// 		}
// 	}
// 	try
// 	{
// 		numbers[-2] = 0;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}
// 	try
// 	{
// 		numbers[MAX_VAL] = 0;
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cerr << e.what() << '\n';
// 	}

// 	for (int i = 0; i < MAX_VAL; i++)
// 	{
// 		numbers[i] = rand();
// 	}
// 	delete [] mirror;//
// 	return 0;
// }
