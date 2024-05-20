/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:59:02 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/20 11:14:10 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Converts an uppercase letter to lowercase if applicable.
 *
 * @param c - The character to be converted to lowercase if it is an 
 * uppercase letter.
 * @return The lowercase equivalent of 'c' if 'c' is an uppercase letter, 
 * otherwise returns 'c'.
 * 
 * This function converts an uppercase letter to its lowercase equivalent 
 * if 'c' is an uppercase letter.
 * Returns the lowercase equivalent if 'c' is uppercase, otherwise returns 'c'.
 */

int	ft_tolower(int c)
{
	if (c > 64 && c < 91)
	{
		return (c + 32);
	}
	else
	{
		return (c);
	}
}
