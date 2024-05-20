/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:53:13 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/20 11:06:07 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Writes a character to the specified file descriptor.
 *
 * @param c - The character to be written.
 * @param fd - The file descriptor where the character will be written.
 * 
 * Writes the character 'c' to the specified file descriptor 'fd'.
 */

void	ft_putchar_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}
