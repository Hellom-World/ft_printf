# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heolivei <heolivei@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/27 12:58:41 by heolivei          #+#    #+#              #
#    Updated: 2023/02/01 20:33:07 by heolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c ft_print_hex.c ft_print_number.c ft_print_pointer.c ft_print_unsigned.c
OBJS	= $(SRCS:.c=.o)
CC	= cc
CFLAGS	= -Wall -Wextra -Werror
LIBCR	= ar rc
RM	= rm -f

NAME	= libftprintf.a

all:		$(NAME)

$(NAME):		$(OBJS)
			$(LIBCR) $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)
fclean:			clean
			$(RM) $(NAME)

re:			fclean all

so:     $(CC) -g -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -g -nostartfiles -shared -o ft_printf.so $(OBJS)
