/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 10:48:55 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/20 10:30:00 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Calculates the absolute value of a long integer.
 *
 * @argument nbr - The number whose absolute value is to be calculated.
 * @return The absolute value of the input number.
 * 
 * If the input number is negative, returns its negation (positive).
 * If the input number is non-negative, returns the number itself.
 */

long int	ft_abs(long int nbr)
{
	if (nbr < 0)
	{
		return (-nbr);
	}
	else
	{
		return (nbr);
	}
}

/**
 * Calculates the length (number of digits) of a long integer.
 *
 * @argument nbr - The number whose length is to be calculated.
 * @param len - Variable to store the length of the number.
 * @return The length of the input number.
 * 
 * If the input number is less than or equal to 0, the length is 
 * considered as 1.
 * For positive numbers, it counts the number of digits until the
 * number becomes 0.
 * Returns the total number of digits in the input number.
 */

int	ft_len(long int nbr)
{
	int		len;

	if (nbr <= 0)
	{
		len = 1;
	}
	else
	{
		len = 0;
	}
	while (nbr != 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

/**
 * Converts an integer to a string representation.
 *
 * @argument n - The integer to be converted to a string.
 * @param len - Variable to store the length of the converted string.
 * @param sign - Stores the sign of the input number (-1 for negative, 
 * 1 for positive).
 * @param c - Pointer to the dynamically allocated memory for the string.
 * @return Pointer to the string representation of the input number.
 * 
 * Converts the input integer to its string representation.
 * Allocates memory for the string and populates it with the digits
 * of the integer.
 * If the integer is negative, includes a '-' sign in the string.
 * Returns a pointer to the string representation of the input number.
 */

char	*ft_itoa(int n)
{
	int		len;
	int		sign;
	char	*c;

	if (n < 0)
		sign = -1;
	else
		sign = 1;
	len = ft_len(n);
	c = (char *)malloc(sizeof(char) * len + 1);
	if (c == NULL)
		return (0);
	c[len] = '\0';
	len--;
	while (len >= 0)
	{
		c[len] = '0' + ft_abs(n % 10);
		n = ft_abs(n / 10);
		len--;
	}
	if (sign == -1)
		c[0] = '-';
	return (c);
}
