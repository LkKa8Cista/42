/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:03:29 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/09 15:11:16 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	ite;
	int	value;
	int	flag;

	ite = 0;
	value = 0;
	flag = 1;
	while ((nptr[ite] > 8 && nptr[ite] < 14) || nptr[ite] == 32)
		ite++;
	if (nptr[ite] == 45 || nptr[ite] == 43)
	{
		if (nptr[ite] == 45)
			flag = -1;
		ite++;
	}
	while (nptr[ite] > 47 && nptr[ite] < 58)
	{
		value *= 10;
		value += (nptr[ite] - '0');
		ite++;
	}
	return (value * flag);
}
