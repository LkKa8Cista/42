/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:21:48 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/28 14:44:20 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * Prints an integer number to the standard output.
 *
 * @param num - The integer to be printed.
 * @return The number of characters printed.
 */
int	ft_print_nbr(int num)
{
	int	len;

	len = 0;
	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (num < 0)
	{
		ft_printchar('-');
		num *= -1;
		len++;
	}
	if (num > 9)
	{
		len += ft_print_nbr(num / 10);
		len += ft_print_nbr(num % 10);
	}
	else
	{
		ft_printchar(num + '0');
		len++;
	}
	return (len);
}

/**
 * Prints an unsigned integer number to the standard output.
 *
 * @param num - The unsigned integer to be printed.
 * @return The number of characters printed.
 */
int	ft_print_un_nbr(unsigned int num)
{
	int	len;

	len = 0;
	if (num > 9)
	{
		len += ft_print_un_nbr(num / 10);
		len += ft_print_un_nbr(num % 10);
	}
	else
	{
		ft_printchar(num + '0');
		len++;
	}
	return (len);
}
