# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: heolivei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/27 12:58:41 by heolivei          #+#    #+#              #
#    Updated: 2023/01/27 13:40:27 by heolivei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c
OBJS	= $(SRCS:.c=.o)
CC	= cc
CFLAGS	= -Wall -Wextra -Werror
LIBCR	= ar rc
RM	= rm -f

NAME	= ft_printf.a

all:		$(NAME)

$(NAME):		$(OBJS)
			$(LIBCR) $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)
fclean:			clean
			$(RM) $(NAME)

re:	fclean all

so:     $(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o ft_printf.so $(OBJS)
