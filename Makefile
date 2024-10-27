# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchetoui <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 14:27:45 by mchetoui          #+#    #+#              #
#    Updated: 2024/10/27 15:47:24 by mchetoui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
NAME=libft.a
CFLAGS = -Wall -Werror -Wextra -std=c99
FILES = $(wildcard ft_*.c)

.PHONY: all clean fclean re

all: $(NAME)

test : all
	$(CC) -o test main.c libft.a

libft.a: $(FILES:.c=.o)
	ar rcs libft.a $(FILES:.c=.o)
%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<
clean:
	rm -rf $(FILES:.c=.o)

fclean: clean
	rm -rf libft.a

re: fclean all
