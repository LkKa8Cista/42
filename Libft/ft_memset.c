/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:43:36 by lcorreia          #+#    #+#             */
/*   Updated: 2024/04/30 14:18:14 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*new_str;
	size_t			iterator;

	new_str = str;
	iterator = 0;
	while (iterator < n)
	{
		*new_str++ = c;
		iterator++;
	}
	return (str);
}
