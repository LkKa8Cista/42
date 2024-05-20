/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 13:45:47 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/20 11:12:46 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Locates the first occurrence of a substring within a limited-length string.
 *
 * @param big - Pointer to the null-terminated string to be searched.
 * @param little - Pointer to the null-terminated substring to search for.
 * @param len - Maximum number of characters to search within 'big'.
 * @return Pointer to the first occurrence of 'little' within 'big' if found, 
 * or NULL if 'little' is not found or 'big' is shorter than 'little'.
 * 
 * Searches for the first occurrence of the null-terminated substring 
 * 'little' within the first 'len' characters of the null-terminated 
 * string 'big'.
 * Returns a pointer to the located substring if found, otherwise returns NULL.
 */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	lit_len;
	size_t	big_len;
	size_t	size;

	if (*little == '\0')
		return ((char *)big);
	lit_len = ft_strlen(little);
	big_len = ft_strlen(big);
	if (big_len < lit_len || len < lit_len)
		return (0);
	if (big_len > len)
	{
		size = len;
	}
	else
	{
		size = big_len;
	}
	while (size-- >= lit_len)
	{
		if (ft_memcmp(big, little, lit_len) == 0)
			return ((char *)big);
		big++;
	}
	return (0);
}
