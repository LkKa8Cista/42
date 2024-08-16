/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_car.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:21:44 by lcorreia          #+#    #+#             */
/*   Updated: 2024/08/16 12:07:45 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * Prints a single character to the standard output.
 *
 * @param c - The character to be printed.
 * @return The number of characters printed (always 1).
 */
int	ft_printchar(int c)
{
	write(1, &c, 1);
	return (1);
}

/**
 * Prints a string to the standard output.
 *
 * @param str - The string to be printed. If str is NULL, "(null)" is 
 * printed instead.
 * @return The number of characters printed.
 */
int	ft_printstr(char *str)
{
	int	ite;

	ite = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[ite])
	{
		write(1, &str[ite], 1);
		ite++;
	}
	return (ite);
}

/**
 * Prints a percent symbol '%' to the standard output.
 *
 * @return The number of characters printed (always 1).
 */
int	ft_printpercent(void)
{
	write(1, "%", 1);
	return (1);
}
