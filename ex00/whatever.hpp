/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlewicki <nlewicki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 10:54:44 by nlewicki          #+#    #+#             */
/*   Updated: 2025/07/16 09:54:59 by nlewicki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T &a, T &b)
{
	T	tmp = a;
	a = b;
	b = tmp;
};

template <typename T>
T		&min(T &a, T &b)
{
	return (a < b ? a : b);
};

template <typename T>
T		&max(T &a, T &b)
{
	return (a > b ? a : b);
};

#endif
