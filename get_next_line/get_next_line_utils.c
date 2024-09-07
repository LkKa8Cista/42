/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:30:40 by marvin            #+#    #+#             */
/*   Updated: 2024/09/07 13:07:37 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/**
 * Calculates the length of a null-terminated string.
 *
 * @param s - Pointer to the null-terminated string whose length is 
 * to be calculated.
 * @return The length of the string 's', excluding the null terminator.
 * 
 * Iterates over each character of the null-terminated string 's' until it 
 * encounters the null terminator ('\0').
 * Returns the number of characters counted, representing the length 
 * of the string.
 */

size_t	ft_strlen(const char *s)
{
	int	length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
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
	int		strlen;
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	strlen = ft_strlen(s1) + ft_strlen(s2);
	str = (char *)malloc(sizeof(char) * (strlen + 1));
	if (!str)
		return (NULL);
	while (s1 && s2)
	{
		while (s1[i])
			str[j++] = s1[i++];
		i = 0;
		while (s2[i])
			str[j++] = s2[i++];
		str[j] = '\0';
		return (str);
	}
	return (NULL);
}

/**
 * Locates the first occurrence of a character in a string.
 *
 * @param str - Pointer to the null-terminated string to be searched.
 * @param c - The character to be located.
 * @return Pointer to the first occurrence of the character in the string,
 * or NULL if the character is not found.
 * 
 * Searches for the first occurrence of the character 'c' in the string 'str'.
 * Returns a pointer to the first occurrence of 'c' within 'str', or NULL 
 * if 'c' is not found.
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
	return (NULL);
}
/**
 * Sets the first n bytes of the memory area pointed to by str to zero.
 *
 * @argument str - Pointer to the memory area to be filled with zeroes.
 * @param new_str - Pointer to traverse and modify the memory area.
 * @param iterator - Iterator to count the number of bytes set to zero.
 * @param n - The number of bytes to be set to zero.
 * 
 * Initializes a pointer to the memory area, then iterates through 
 * the first n bytes, setting each byte to zero.
 */

void	ft_bzero(void *str, size_t n)
{
	unsigned char	*new_str;
	size_t			iterator;

	new_str = str;
	iterator = 0;
	while (iterator < n)
	{
		*new_str++ = 0;
		iterator++;
	}
}

/**
 * Allocates memory for an array of nmemb elements of size bytes each and 
 * sets the memory to zero.
 *
 * @argument nmemb - Number of elements to allocate.
 * @argument size - Size of each element.
 * @param mem - Pointer to the allocated memory.
 * @return Pointer to the allocated memory, or NULL if the allocation fails.
 * 
 * Allocates memory using malloc for nmemb elements of size bytes each.
 * If the allocation is successful, it sets the allocated memory to 
 * zero using ft_bzero.
 * 
 * Returns the pointer to the allocated memory.
 */

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;

	mem = malloc(nmemb * size);
	if (!mem)
		return (NULL);
	ft_bzero(mem, (nmemb * size));
	return (mem);
}
