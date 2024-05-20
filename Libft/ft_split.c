/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:59:04 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/20 12:19:42 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

/**
 * Counts the number of words in a string separated by a specified delimiter.
 *
 * @param s - The string to be analyzed.
 * @param c - The delimiter character.
 * @return The number of words in the string.
 * 
 * Iterates through the string 's' and counts the number of words separated 
 * by the delimiter 'c'.
 */

static int	words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

/**
 * Inserts words from a string into an array of strings.
 *
 * @param split - Pointer to the array of strings.
 * @param s - The string to be split.
 * @param c - The delimiter character.
 * 
 * Inserts words from the string 's' into the array of strings 'split', 
 * separated by the delimiter 'c'.
 */

static void	insert(char **split, char const *s, char c)
{
	char const	*temp;

	temp = s;
	while (*temp)
	{
		while (*s == c)
			s++;
		temp = s;
		while (*temp != c && *temp)
			temp++;
		if (*temp == c || temp > s)
		{
			*split = ft_substr(s, 0, temp - s);
			s = temp;
			split++;
		}
	}
	*split = NULL;
}

/**
 * Splits a string into an array of strings using a specified delimiter.
 *
 * @param s - The string to be split.
 * @param c - The delimiter character.
 * @return An array of strings representing the split words.
 * Splits the string 's' into an array of strings based on the delimiter 'c'.
 */

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		size;

	if (!s)
	{
		return (NULL);
	}
	size = words(s, c);
	split = malloc(sizeof(char *) * (size + 1));
	if (!split)
		return (NULL);
	insert(split, s, c);
	return (split);
}
