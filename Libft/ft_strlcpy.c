/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:14:14 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/20 11:09:20 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Copies a string to a buffer, ensuring null-termination and preventing 
 * buffer overflow.
 *
 * @param dst - Pointer to the destination buffer where the string will 
 * be copied.
 * @param src - Pointer to the source string to be copied.
 * @param size - Size of the destination buffer including the null terminator.
 * @return The length of the source string, not including the null terminator.
 * 
 * Copies the null-terminated string 'src' to the destination buffer 'dst', 
 * ensuring that the resulting string is null-terminated and fits within the 
 * buffer specified by 'size'. Returns the length of the source string.
 */

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	length;
	size_t	ite;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	if (size == 0)
	{
		return (length);
	}
	ite = 0;
	while (src[ite] != '\0' && ite < (size - 1))
	{
		dst[ite] = src[ite];
		ite++;
	}
	dst[ite] = '\0';
	return (length);
}
