/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:26:49 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/28 14:47:56 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * Prints an unsigned integer in hexadecimal format.
 *
 * @param num - The unsigned integer to be printed.
 * @param caps - If non-zero, the hexadecimal letters will be uppercase; otherwise, they will be lowercase.
 */
void	ft_print_hex(unsigned int num, int caps)
{
	if (num == 0)
	{
		ft_printchar('0');
		return ;
	}
	if (num > 15)
	{
		ft_print_hex(num / 16, caps);
		ft_print_hex(num % 16, caps);
	}
	else
	{
		if (num < 10)
		{
			ft_printchar(num + '0');
		}
		else
		{
			ft_printchar(num + 'a' - 10 - caps);
		}
	}
	return ;
}

/**
 * Prints a pointer address in hexadecimal format.
 *
 * @param num_big - The pointer value to be printed as an unsigned long long integer.
 */
void	ft_print_pointer(unsigned long long int num_big)
{
	if (num_big > 15)
	{
		ft_print_pointer(num_big / 16);
		ft_print_pointer(num_big % 16);
	}
	else
	{
		if (num_big < 10)
		{
			ft_printchar(num_big + '0');
		}
		else
		{
			ft_printchar(num_big + 'a' - 10);
		}
	}
	return ;
}

/**
 * Counts the length of an unsigned integer when printed in hexadecimal format, and prints the number.
 *
 * @param num - The unsigned integer to be printed and counted.
 * @param caps - If non-zero, the hexadecimal letters will be uppercase; otherwise, they will be lowercase.
 * @return The number of characters printed.
 */
int	ft_count_hex_len(unsigned int num, int caps)
{
	int				len;
	unsigned int	temp;

	len = 0;
	temp = num;
	if (num == 0)
	{
		ft_printchar('0');
		return (1);
	}
	while (temp != 0)
	{
		len++;
		temp /= 16;
	}
	ft_print_hex(num, caps);
	return (len);
}

/**
 * Counts the length of a pointer when printed in hexadecimal format, and prints the pointer value.
 *
 * @param big_num - The pointer to be printed and counted.
 * @return The number of characters printed, including the "0x" prefix.
 */
int	ft_count_point_len(void *big_num)
{
	int						len;
	unsigned long long int	temp;
	unsigned long long int	t_ptr;

	len = 0;
	if (!big_num)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	temp = (unsigned long long int) big_num;
	t_ptr = (unsigned long long int) big_num;
	while (temp != 0)
	{
		len++;
		temp /= 16;
	}
	write(1, "0x", 2);
	ft_print_pointer(t_ptr);
	return (len + 2);
}