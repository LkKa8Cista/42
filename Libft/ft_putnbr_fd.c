/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:57:15 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/16 10:57:24 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Displays an integer as a sequence of characters to the specified file descriptor.
 *
 * @param n - The integer to be displayed.
 * @param fd - The file descriptor where the integer will be displayed.
 * Recursively displays each digit of the integer 'n' as a character sequence 
 * to the specified file descriptor 'fd'.
 */

void	display_nbr(int n, int fd)
{
	if (n >= 10)
		display_nbr(n / 10, fd);
	write(fd, &"0123456789"[n % 10], 1);
}

/**
 * Writes an integer to the specified file descriptor.
 *
 * @param n - The integer to be written.
 * @param fd - The file descriptor where the integer will be written.
 * Writes the integer 'n' as a character sequence to the specified file descriptor 'fd'.
 * Handles special cases such as the minimum integer value (-2147483648).
 */

void	ft_putnbr_fd(int n, int fd)
{
	if (fd < 0)
		return ;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	display_nbr(n, fd);
}
