/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:32:48 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/16 10:43:58 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Finds the index of the first character in 's1' that does not appear in 'set'.
 *
 * @param s1 - Pointer to the null-terminated string to be searched.
 * @param set - Pointer to the null-terminated set of characters to search for.
 * @return Index of the first character in 's1' that is not in 'set'.
 * This function searches the string 's1' for the first character that is not present in the set of characters specified by 'set'.
 * Returns the index of the first such character, or the length of 's1' if all characters in 's1' are in 'set'.
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
