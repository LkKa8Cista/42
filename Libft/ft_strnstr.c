/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 13:45:47 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/09 13:57:29 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
