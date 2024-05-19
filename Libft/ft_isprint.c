/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 12:02:36 by lcorreia          #+#    #+#             */
/*   Updated: 2024/04/30 12:09:02 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if the given character is a printable ASCII character.
 *
 * @argument c - The character to be checked.
 * @return 1 if the character is a printable ASCII character (32 to 126), 0 otherwise.
 * Checks if the character's ASCII value falls within the range of printable characters (32-126).
 * Returns 1 if true, otherwise returns 0.
 */

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
	{
		return (1);
	}
	return (0);
}
