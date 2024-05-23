/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:21:48 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/23 17:09:34 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int num)
{
	int	len;

	len = 0;
	if (num < 0)
	{
		ft_printchar('-');
		num *= -1;
		len++;
	}
	if (num > 9)
	{
		ft_print_nbr(num / 10);
		ft_print_nbr(num % 10);
	}
	else
	{
		ft_printchar(num + '0');
		len++;
	}
	
	return (len);
}

int ft_print_un_nbr(unsigned int num)
{
	int	len;

	len = 0;
	if (num > 9)
	{
		ft_print_un_nbr(num / 10);
		ft_print_un_nbr(num % 10);
	}
	else
	{
		ft_printchar(num + '0');
		len++;
	}
	
	return (len);
}
