/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 10:31:41 by lcorreia          #+#    #+#             */
/*   Updated: 2024/05/23 17:03:25 by lcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *, ...);
int		ft_format(va_list args, const char type);
int		ft_print_nbr(int num);
int		ft_print_un_nbr(unsigned int num);
int		ft_count_hex_len(int num, int caps);
int		ft_count_point_len(void *big_num);
int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_printpercent(void);
void	ft_print_hex(int num, int caps);
void	ft_print_pointer(unsigned long long int num_big);

#endif
