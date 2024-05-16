/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:19:10 by lcorreia          #+#    #+#             */
/*   Updated: 2024/04/30 14:22:48 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*new_str;
	size_t			iterator;

	new_str = str;
	iterator = 0;
	while (iterator < n)
	{
		*new_str++ = 0;
		iterator++;
	}
}
