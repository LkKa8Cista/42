/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 16:14:14 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/09 11:08:10 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
