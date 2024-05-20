/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:16:22 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/20 11:08:08 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Concatenates two strings into a new string.
 *
 * @param s1 - Pointer to the first null-terminated string.
 * @param s2 - Pointer to the second null-terminated string.
 * @return Pointer to a newly allocated memory block containing the concatenated 
 * string, or NULL if memory allocation fails or both input strings are NULL.
 * 
 * Concatenates the strings 's1' and 's2' into a new string by allocating 
 * memory for the result, copying the contents of 's1' and 's2' to the new 
 * memory block, and returning a pointer to the new string.
 */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		s1_len;
	int		s2_len;

	if (!(s1) && !(s2))
		return (NULL);
	else if (!(s1) || !(s2))
	{
		if (!s1)
		{
			return (ft_strdup(s2));
		}
		return (ft_strdup(s1));
	}
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new_str = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!new_str)
	{
		return (NULL);
	}
	ft_strlcpy(new_str, s1, s1_len + 1);
	ft_strlcat(new_str + (s1_len), s2, s2_len + 1);
	return (new_str);
}
