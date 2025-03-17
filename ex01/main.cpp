/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 11:03:47 by nlewicki          #+#    #+#             */
/*   Updated: 2025/03/17 11:06:49 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
	std::string arr[6] = {"Hello", "World", "I", "DID", "IT", "!"};
	int arr_int[3] = {1, 2, 3};

	::iter(arr_int, 3, ::print);
	::iter(arr, 6, ::print);
	return 0;
}
