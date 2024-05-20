/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:09:59 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/20 11:09:33 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Calculates the length of a null-terminated string.
 *
 * @param s - Pointer to the null-terminated string whose length is 
 * to be calculated.
 * @return The length of the string 's', excluding the null terminator.
 * 
 * Iterates over each character of the null-terminated string 's' until it 
 * encounters the null terminator ('\0').
 * Returns the number of characters counted, representing the length 
 * of the string.
 */

size_t	ft_strlen(const char *s)
{
	int	length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
