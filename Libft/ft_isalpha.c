/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:42:36 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/20 10:26:22 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if the given character is an alphabetic letter.
 *
 * @argument c - The character to be checked.
 * @return 1 if the character is an alphabetic letter (either uppercase or 
 * lowercase), 0 otherwise.
 * 
 * Checks if the character is an uppercase letter (A-Z) or a lowercase
 * letter (a-z).
 * Returns 1 if true, otherwise returns 0.
 */

int	ft_isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	return (0);
}
