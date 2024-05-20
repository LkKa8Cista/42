/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:19:10 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/20 10:27:09 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Sets the first n bytes of the memory area pointed to by str to zero.
 *
 * @argument str - Pointer to the memory area to be filled with zeroes.
 * @param new_str - Pointer to traverse and modify the memory area.
 * @param iterator - Iterator to count the number of bytes set to zero.
 * @param n - The number of bytes to be set to zero.
 * 
 * Initializes a pointer to the memory area, then iterates through 
 * the first n bytes, setting each byte to zero.
 */

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*new_str;
	size_t			iterator;

	new_str = str;
	iterator = 0;
	while (iterator < n)
	{
		*new_str++ = 0;
		iterator++;
	}
}
