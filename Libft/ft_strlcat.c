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
