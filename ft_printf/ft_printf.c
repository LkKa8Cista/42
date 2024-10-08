/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 10:07:41 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/28 14:43:27 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/**
 * Handles various format specifiers for the ft_printf function.
 *
 * @param args - The list of arguments to be formatted.
 * @param type - The format specifier indicating the type of argument.
 * @return The number of characters printed for the given format specifier.
 */
int	ft_format(va_list args, const char type)
{
	int	print_length;

	print_length = 0;
	if (type == 'c')
		print_length += ft_printchar(va_arg(args, int));
	else if (type == 's')
		print_length += ft_printstr(va_arg(args, char *));
	else if (type == 'p')
		print_length += ft_count_point_len(va_arg(args, void *));
	else if (type == 'd' || type == 'i')
		print_length += ft_print_nbr(va_arg(args, int));
	else if (type == 'u')
		print_length += ft_print_un_nbr(va_arg(args, unsigned int));
	else if (type == 'x')
		print_length += ft_count_hex_len(va_arg(args, unsigned int), 0);
	else if (type == 'X')
		print_length += ft_count_hex_len(va_arg(args, unsigned int), 32);
	else if (type == '%')
		print_length += ft_printpercent();
	return (print_length);
}

/**
 * A custom implementation of the printf function that handles formatted output.
 *
 * @param str - The format string containing text and format specifiers.
 * @return The total number of characters printed.
 */
int	ft_printf(const char *str, ...)
{
	int		ite;
	va_list	args;
	int		print_length;

	ite = 0;
	print_length = 0;
	va_start(args, str);
	while (str[ite])
	{
		if (str[ite] == '%')
		{
			print_length += ft_format(args, str[ite + 1]);
			ite += 2;
		}
		else
		{
			print_length += ft_printchar(str[ite]);
			ite++;
		}
	}
	va_end(args);
	return (print_length);
}
