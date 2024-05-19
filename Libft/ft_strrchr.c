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

/**
 * Locates the last occurrence of a character in a string.
 *
 * @param str - Pointer to the null-terminated string to be searched.
 * @param c - The character to search for.
 * @return Pointer to the last occurrence of 'c' within 'str' if found,
 *         or NULL if 'c' is not found in 'str'.
 * Searches for the last occurrence of the character 'c' within the null-terminated string 'str'.
 * Returns a pointer to the located character if found, otherwise returns NULL.
 */

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
