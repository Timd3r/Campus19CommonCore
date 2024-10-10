# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tde-raev <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 12:51:57 by tde-raev          #+#    #+#              #
#    Updated: 2024/10/09 16:45:22 by tde-raev         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = 	ft_atoi.c    ft_isalnum.c  ft_isdigit.c  ft_memcmp.c   ft_memset.c  ft_strlcpy.c  ft_strnstr.c	ft_toupper.c ft_bzero.c   ft_isalpha.c  ft_isprint.c  ft_memcpy.c   ft_strchr.c  ft_strlen.c   ft_strrchr.c ft_calloc.c  ft_isascii.c  ft_memchr.c	 ft_memmove.c  ft_strdup.c  ft_strncmp.c  ft_tolower.c
OBJ = $(SRC:.c=.o)

NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all
