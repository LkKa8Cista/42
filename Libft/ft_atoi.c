/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:03:29 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/20 10:27:18 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts a string to an integer.
 *
 * @argument nptr - The string to be converted to an integer.
 * @param ite - Iterator to traverse the string.
 * @param value - Accumulator for the integer value.
 * @param flag - Sign flag, 1 for positive, -1 for negative.
 * @return The integer value of the string.
 * 
 * First skip whitespace characters, 
 * then check for optional sign character (+ or -, if '-', flag turns -1),
 * finally convert the numeric part of the string to an integer, 
 * and multiply by the flag value
 */

int	ft_atoi(const char *nptr)
{
	int	ite;
	int	value;
	int	flag;

	ite = 0;
	value = 0;
	flag = 1;
	while ((nptr[ite] > 8 && nptr[ite] < 14) || nptr[ite] == 32)
		ite++;
	if (nptr[ite] == 45 || nptr[ite] == 43)
	{
		if (nptr[ite] == 45)
			flag = -1;
		ite++;
	}
	while (nptr[ite] > 47 && nptr[ite] < 58)
	{
		value *= 10;
		value += (nptr[ite] - '0');
		ite++;
	}
	return (value * flag);
}
