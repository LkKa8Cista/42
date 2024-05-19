/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 13:39:39 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/09 13:59:21 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Compares two blocks of memory.
 *
 * @param s1 - Pointer to the first block of memory.
 * @param s2 - Pointer to the second block of memory.
 * @param n - Number of bytes to compare.
 * @return An integer less than, equal to, or greater than zero if the first 'n' bytes of 's1'
 *         are found, respectively, to be less than, to match, or be greater than the first 'n' bytes of 's2'.
 * Compares the first 'n' bytes of the memory blocks pointed to by 's1' and 's2'.
 * Returns an integer less than, equal to, or greater than zero if 's1' is found,
 * respectively, to be less than, to match, or be greater than 's2'.
 */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			ite;
	size_t			decr;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	ite = 0;
	decr = n;
	while (decr--)
	{
		if (str1[ite] != str2[ite])
			return (str1[ite] - str2[ite]);
		ite++;
	}
	return (0);
}
