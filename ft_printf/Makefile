# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lcorreia <lcorreia@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/30 11:12:54 by lcorreia          #+#    #+#              #
#    Updated: 2024/05/28 11:34:45 by lcorreia         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c \
		ft_print_car.c \
		ft_print_hex.c \
		ft_print_num.c

OBJS	= $(SRCS:.c=.o)

CC	= cc
CFLAGS	= -Wall -Wextra -Werror
AR	= ar rcs
RM	= rm -f

NAME	= libftprintf.a

all:	 $(NAME)

$(NAME): $(OBJS)
	  $(AR) $(NAME) $(OBJS)

clean:
	  $(RM) $(OBJS)

fclean:  clean
	  $(RM) $(NAME)

re:	 fclean $(NAME)

.PHONY: all clean fclean re
