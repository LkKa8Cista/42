/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 13:24:54 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/20 11:05:31 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Locates the first occurrence of a byte in a block of memory.
 *
 * @param s - Pointer to the memory block to be searched.
 * @param c - Byte value to be located.
 * @param n - Number of bytes to be searched.
 * @return Pointer to the first occurrence of the byte 'c' in the memory 
 * block 's', or NULL if 'c' is not found.
 * 
 * Searches the first 'n' bytes of the memory block pointed to by 's' for 
 * the byte value 'c'.
 * Returns a pointer to the first occurrence of 'c' in the memory block if 
 * found, or NULL otherwise.
 */

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	ite;

	ite = n;
	while (ite--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
		{
			return ((void *)s);
		}
		s++;
	}
	return (0);
}
