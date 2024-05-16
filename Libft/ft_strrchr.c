/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 12:09:33 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/09 13:15:01 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		ite;
	char	find;
	char	*last;

	ite = ft_strlen(str);
	find = (char)c;
	last = (char *)str;
	while (ite > 0)
	{
		if (last[ite] == find)
		{
			return (last + ite);
		}
		ite--;
	}
	if (last[ite] == find)
	{
		return (last);
	}
	return (0);
}
