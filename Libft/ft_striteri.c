/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:52:16 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/20 11:07:43 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Applies a function to each character of a string, passing its index as 
 * an argument.
 *
 * @param s - Pointer to the null-terminated string to be iterated over.
 * @param f - Pointer to the function to apply to each character.
 * 
 * Iterates over each character of the null-terminated string 's' and applies 
 * the function 'f' to each character,passing its index as the first 
 * argument to 'f'.
 */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	ite;

	ite = 0;
	while (s[ite])
	{
		(*f)(ite, s + ite);
		ite++;
	}
}
