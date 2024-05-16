/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 12:04:36 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/09 12:11:45 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	find;
	int		ite;

	find = (unsigned char)c;
	ite = 0;
	while (str[ite] != '\0')
	{
		if (str[ite] == find)
		{
			return ((char *)str + ite);
		}
		ite++;
	}
	if (str[ite] == find)
	{
		return ((char *)str + ite);
	}
	return (0);
}
