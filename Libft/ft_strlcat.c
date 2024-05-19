/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 10:56:27 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/09 11:07:25 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Concatenates two strings, ensuring that the resulting string is null-terminated and fits within a given size.
 *
 * @param dst - Pointer to the destination string where the concatenation result will be stored.
 * @param src - Pointer to the source string to be concatenated.
 * @param size - Maximum size of the destination buffer including the null terminator.
 * @return The total length of the concatenated string (initial length of dst + length of src),
 *         truncated to fit within size, or size + length of src if the destination buffer is too small.
 * Concatenates the string 'src' to the end of the string 'dst', ensuring that the resulting string is null-terminated
 * and fits within the buffer specified by 'size'. Returns the total length of the concatenated string.
 */

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	ite;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	ite = 0;
	if (size < dst_len + 1)
		return (size + src_len);
	if (size > dst_len + 1)
	{
		while (src[ite] != '\0' && dst_len + 1 + ite < size)
		{
			dst[dst_len + ite] = src[ite];
			ite++;
		}
	}
	dst[dst_len + ite] = '\0';
	return (dst_len + src_len);
}
