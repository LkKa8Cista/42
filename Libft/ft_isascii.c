/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:29:49 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/20 10:26:58 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if the given character is a valid ASCII character.
 *
 * @argument c - The character to be checked.
 * @return 1 if the character is a valid ASCII character (0 to 127), 
 * 0 otherwise.
 * 
 * Checks if the character's ASCII value falls within the valid 
 * range of 0 to 127.
 * Returns 1 if true, otherwise returns 0.
 */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
