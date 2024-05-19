/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 13:16:06 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/09 13:24:01 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Compares two null-terminated strings, up to a specified maximum number of characters.
 *
 * @param s1 - Pointer to the first null-terminated string to be compared.
 * @param s2 - Pointer to the second null-terminated string to be compared.
 * @param n - Maximum number of characters to compare.
 * @return An integer less than, equal to, or greater than 0 if the first 'n' characters of s1 are found,
 *         respectively, to be less than, to match, or be greater than the first 'n' characters of s2.
 * Compares the first 'n' characters of the null-terminated strings 's1' and 's2'.
 * Returns an integer less than, equal to, or greater than 0 if 's1' is found, respectively,
 * to be less than, to match, or be greater than 's2' in lexicographical order.
 */

int	ft_strncmp(const char *s1, const char *s2, size_t n)
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
		if (str1[ite] != str2[ite] || str1[ite] == 0 || str2[ite] == 0)
			return (str1[ite] - str2[ite]);
		ite++;
	}
	return (0);
}
