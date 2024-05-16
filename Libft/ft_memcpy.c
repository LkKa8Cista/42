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
