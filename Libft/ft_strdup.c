/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:02:37 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/09 16:14:39 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		ite;
	int		len;
	char	*new_str;

	len = 0;
	while (s[len])
		len++;
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!(new_str))
		return (NULL);
	ite = 0;
	while (s[ite])
	{
		new_str[ite] = s[ite];
		ite++;
	}
	new_str[ite] = '\0';
	return (new_str);
}
