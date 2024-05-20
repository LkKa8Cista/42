/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:36:29 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/20 11:14:22 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts a lowercase letter to uppercase if applicable.
 *
 * @param c - The character to be converted to uppercase if it is a 
 * lowercase letter.
 * @return The uppercase equivalent of 'c' if 'c' is a lowercase letter, 
 * otherwise returns 'c'.
 * 
 * This function converts a lowercase letter to its uppercase equivalent 
 * if 'c' is a lowercase letter.
 * Returns the uppercase equivalent if 'c' is lowercase, otherwise returns 'c'.
 */

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
	{
		return (c - 32);
	}
	else
	{
		return (c);
	}
}
