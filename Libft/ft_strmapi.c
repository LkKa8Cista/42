/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:51:08 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/20 11:11:41 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Applies a function to each character of a string to create a new string.
 *
 * @param s - Pointer to the null-terminated string to be mapped.
 * @param f - Pointer to the function to be applied to each character.
 * @return Pointer to a newly allocated memory block containing the mapped 
 * string,or NULL if memory allocation fails or either input pointer is NULL.
 * 
 * Applies the function 'f' to each character of the null-terminated string 's',
 * creating a new string with the results. Returns a pointer to the new string.
 */

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
