/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:16:03 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/20 11:13:51 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Creates a new substring from a given string starting at index 'start' 
 * with length 'len'.
 *
 * @param s - Pointer to the null-terminated string from which the 
 * substring is created.
 * @param start - Index of the first character of the substring in 's'.
 * @param len - Length of the substring.
 * @return Pointer to the newly allocated substring, or NULL if allocation fails.
 * 
 * This function creates a new substring from the string 's' starting at index 
 * 'start' with length 'len'.
 * Returns a pointer to the newly allocated substring, or NULL if the 
 * allocation fails.
 */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	new_len;

	if (s == NULL)
	{
		return (NULL);
	}
	if ((unsigned int)ft_strlen(s) < start)
	{
		return (ft_strdup(""));
	}
	new_len = ft_strlen(s + start);
	if (new_len < len)
	{
		len = new_len;
	}
	new_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!new_str)
	{
		return (NULL);
	}
	ft_strlcpy(new_str, s + start, len + 1);
	return (new_str);
}
