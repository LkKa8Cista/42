/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:32:48 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/20 11:13:15 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Determines the starting position in the string s1 that does not contain any characters from set.
 *
 * @param s1 - The input string to be trimmed.
 * @param set - The set of characters to be trimmed from the beginning of s1.
 * @return The index of the first character in s1 that is not in set.
 */

int	ft_getstart(const char *s1, const char *set)
{
	size_t	len;
	size_t	ite;

	len = ft_strlen(s1);
	ite = 0;
	while (ite < len)
	{
		if (ft_strchr(set, s1[ite]) == 0)
		{
			break ;
		}
		ite++;
	}
	return (ite);
}

/**
 * Determines the ending position in the string s1 that does not contain any characters from set.
 *
 * @param s1 - The input string to be trimmed.
 * @param set - The set of characters to be trimmed from the end of s1.
 * @return The index of the last character in s1 that is not in set.
 */

int	ft_getend(const char *s1, const char *set)
{
	size_t	len;
	size_t	ite;

	len = ft_strlen(s1);
	ite = 0;
	while (ite < len)
	{
		if (ft_strchr(set, s1[len - ite - 1]) == 0)
		{
			break ;
		}
		ite++;
	}
	return (len - ite);
}

/**
 * Trims the characters from the beginning and the end of the string s1 that are present in the set.
 *
 * @param s1 - The input string to be trimmed.
 * @param set - The set of characters to be trimmed from the beginning and end of s1.
 * @return A new string with the characters from set removed from both ends.
 */

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*new_str;

	if (s1 == NULL)
	{
		return (NULL);
	}
	if (set == NULL)
	{
		return (ft_strdup(s1));
	}
	start = ft_getstart(s1, set);
	end = ft_getend(s1, set);
	if (start >= end)
	{
		return (ft_strdup(""));
	}
	new_str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}
	ft_strlcpy(new_str, s1 + start, end - start + 1);
	return (new_str);
}
