/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 15:43:49 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/20 10:27:43 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Allocates memory for an array of nmemb elements of size bytes each and 
 * sets the memory to zero.
 *
 * @argument nmemb - Number of elements to allocate.
 * @argument size - Size of each element.
 * @param mem - Pointer to the allocated memory.
 * @return Pointer to the allocated memory, or NULL if the allocation fails.
 * 
 * Allocates memory using malloc for nmemb elements of size bytes each.
 * If the allocation is successful, it sets the allocated memory to 
 * zero using ft_bzero.
 * 
 * Returns the pointer to the allocated memory.
 */

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	mem = malloc(nmemb * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, (nmemb * size));
	return (mem);
}
