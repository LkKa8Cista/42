/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 10:57:57 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/20 10:28:36 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if the given character is a digit.
 *
 * @argument c - The character to be checked.
 * @return 1 if the character is a digit (0-9), 0 otherwise.
 * 
 * Checks if the character's ASCII value falls within the range of
 * digits (48-57).
 * Returns 1 if true, otherwise returns 0.
 */

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
