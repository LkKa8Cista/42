/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 11:01:53 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/20 10:26:03 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Checks if the given character is alphanumeric.
 *
 * @argument c - The character to be checked.
 * @return 1 if the character is alphanumeric (a digit or a letter)
 * , 0 otherwise.
 * 
 * Checks if the character is a digit (0-9), an uppercase letter (A-Z),
 * or a lowercase letter (a-z). Returns 1 if true, otherwise returns 0.
 */

int	ft_isalnum(int c)
{
	if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	return (0);
}
