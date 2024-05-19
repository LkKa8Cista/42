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

/**
 * Locates the first occurrence of a character in a string.
 *
 * @param str - Pointer to the null-terminated string to be searched.
 * @param c - The character to be located.
 * @return Pointer to the first occurrence of the character in the string,
 *         or NULL if the character is not found.
 * Searches for the first occurrence of the character 'c' in the string 'str'.
 * Returns a pointer to the first occurrence of 'c' within 'str', or NULL if 'c' is not found.
 */

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
