# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mchetoui <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/22 14:27:45 by mchetoui          #+#    #+#              #
#    Updated: 2024/11/03 14:50:19 by mchetoui         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC=cc
NAME=libft.a
CFLAGS = -Wall -Werror -Wextra -std=c99
MFILES = ft_split.c ft_strtrim.c ft_putnbr_fd.c ft_substr.c ft_calloc.c \
		ft_strnstr.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
		ft_strchr.c ft_strlcat.c ft_strncmp.c ft_strrchr.c ft_atoi.c \
		ft_isascii.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isdigit.c \
		ft_isprint.c ft_itoa.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
		ft_putstr_fd.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcpy.c \
		ft_strlen.c ft_strmapi.c ft_tolower.c ft_toupper.c
BFILES = ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstmap_bonus.c \
		ft_lstadd_front_bonus.c ft_lstiter_bonus.c ft_lstnew_bonus.c \
		ft_lstclear_bonus.c ft_lstlast_bonus.c ft_lstsize_bonus.c
FILES = ${MFILES} ${BFILES}

.PHONY: all clean fclean re

all: $(NAME)

libft.a: $(MFILES:.c=.o)
	ar rcs libft.a $?
bonus: $(FILES:.c=.o)
	ar rcs libft.a $?
%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<
clean:
	rm -rf $(FILES:.c=.o)

fclean: clean
	rm -rf libft.a

re: fclean all
