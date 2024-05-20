/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 16:02:37 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/20 11:07:25 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Duplicates a string.
 *
 * @param s - Pointer to the null-terminated string to be duplicated.
 * @return Pointer to a newly allocated memory block containing a duplicate 
 * of the input string, or NULL if memory allocation fails.
 * 
 * Duplicates the null-terminated string 's' by allocating memory for a 
 * new string, copying the content of 's' to the new memory block, and 
 * returning a pointer to the new string.
 */

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
