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
