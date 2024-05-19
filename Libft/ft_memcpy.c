/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:25:14 by lcorreia          #+#    #+#             */
/*   Updated: 2024/04/30 14:54:08 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copies 'n' bytes from source memory area to destination memory area.
 *
 * @param dest - Pointer to the destination memory area where the content is to be copied.
 * @param src - Pointer to the source memory area from where the content is to be copied.
 * @param n - Number of bytes to be copied.
 * @return Pointer to the destination memory area.
 * Copies 'n' bytes from the source memory area 'src' to the destination memory area 'dest'.
 * Returns a pointer to the destination memory area 'dest'.
 */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*new_src;
	unsigned char		*new_dest;
	size_t				iterator;

	new_src = src;
	new_dest = dest;
	iterator = 0;
	if (!src && !dest)
	{
		return (0);
	}
	while (iterator < n)
	{
		*new_dest++ = *new_src++;
		iterator++;
	}
	return (dest);
}
