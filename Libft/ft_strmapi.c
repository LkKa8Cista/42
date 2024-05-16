/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:51:08 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/16 13:18:27 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new_str;
	unsigned int	len;
	unsigned int	ite;

	if (s == 0 || f == 0)
		return (NULL);
	len = ft_strlen(s);
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
	{
		return (NULL);
	}
	ite = 0;
	while (s[ite])
	{
		new_str[ite] = f(ite, s[ite]);
		ite++;
	}
	new_str[ite] = '\0';
	return (new_str);
}
