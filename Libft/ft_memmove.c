/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:56:12 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/20 11:05:53 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copies 'n' bytes from source memory area to destination memory area, 
 * handling overlapping memory regions.
 *
 * @param dest - Pointer to the destination memory area where the content 
 * is to be copied.
 * @param src - Pointer to the source memory area from where the content 
 * is to be copied.
 * @param n - Number of bytes to be copied.
 * @return Pointer to the destination memory area.
 * 
 * Copies 'n' bytes from the source memory area 'src' to the destination 
 * memory area 'dest'.
 * Handles overlapping memory regions correctly.
 * Returns a pointer to the destination memory area 'dest'.
 */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*new_src;
	unsigned char		*new_dest;
	size_t				iterator;

	new_src = (const unsigned char *)src;
	new_dest = (unsigned char *)dest;
	iterator = n;
	if (!src && !dest)
		return (0);
	if (new_dest > new_src)
	{
		while (iterator-- > 0)
			new_dest[iterator] = new_src[iterator];
	}
	else
	{
		iterator = 0;
		while (iterator < n)
		{
			new_dest[iterator] = new_src[iterator];
			iterator++;
		}
	}
	return (dest);
}
