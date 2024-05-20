/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:43:36 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/20 11:06:02 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Fills a block of memory with a specified value.
 *
 * @param str - Pointer to the memory block to be filled.
 * @param c - Value to be set (interpreted as an unsigned char).
 * @param n - Number of bytes to be set to the value 'c'.
 * @return Pointer to the memory block after filling.
 * 
 * Fills the first 'n' bytes of the memory block pointed to by 'str' 
 * with the value 'c'.
 * Returns a pointer to the memory block 'str' after filling.
 */

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*new_str;
	size_t			iterator;

	new_str = str;
	iterator = 0;
	while (iterator < n)
	{
		*new_str++ = c;
		iterator++;
	}
	return (str);
}
