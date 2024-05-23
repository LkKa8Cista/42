/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 15:26:49 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/23 17:02:27 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(int num, int caps)
{
	if (num == 0)
	{
		ft_printchar('0');
		return ;
	}
	if (num > 15)
	{
		ft_print_hex(num / 16, caps);
		ft_print_hex(num % 16, caps);
	}
	else
	{
		if (num < 10)
		{
			ft_printchar(num + '0');
		}
		else
		{
			ft_printchar(num + 'a' - 10 - caps);
		}
	}
	return ;
}

void	ft_print_pointer(unsigned long long int num_big)
{
	if (num_big > 15)
	{
		ft_print_pointer(num_big / 16);
		ft_print_pointer(num_big % 16);
	}
	else
	{
		if (num_big < 10)
		{
			ft_printchar(num_big + '0');
		}
		else
		{
			ft_printchar(num_big + 'a' - 10);
		}
	}
	return ;
}

int	ft_count_hex_len(int num, int caps)
{
	int len;
	int temp;
	
	len = 0;
	temp = num;
	while(temp != 0)
	{
		len++;
		temp /= 10;
	}
	ft_print_hex(num, caps);
	return (len);
}


int	ft_count_point_len(void *big_num)
{
	int len;
	unsigned long long int temp;
	unsigned long long int t_ptr;
	
	len = 0;
	if (!big_num)
	{
		write(1,"(nil)",5);
		return (5);
	}
	temp = (unsigned long long int) big_num;
	t_ptr = (unsigned long long int) big_num;
	while(temp != 0)
	{
		len++;
		temp /= 10;
	}
	write(1,"0x",2);
	ft_print_pointer(t_ptr);
	return (len + 2);
}
