# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 08:06:16 by dcerrito          #+#    #+#              #
#    Updated: 2022/03/29 04:25:39 by dcerrito         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.
CORE_DIR = core/
CORE_FILES = \
	ft_memset.c		\
	ft_bzero.c		\
	ft_memcpy.c		\
	ft_memmove.c	\
	ft_memchr.c		\
	ft_memcmp.c		\
	ft_strlen.c		\
	ft_isalpha.c	\
	ft_isdigit.c	\
	ft_isalnum.c	\
	ft_isascii.c	\
	ft_isprint.c	\
	ft_toupper.c	\
	ft_tolower.c	\
	ft_strchr.c		\
	ft_strrchr.c	\
	ft_strncmp.c	\
	ft_strdup.c		\
	ft_strnstr.c	\
	ft_atoi.c		\
	ft_calloc.c		\
	ft_strlcpy.c	\
	ft_strlcat.c
SRCS = $(addprefix $(CORE_DIR), $(CORE_FILES))
OBJS = $(patsubst %.c, %.o, $(addprefix $(CORE_DIR), $(CORE_FILES)))
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
all: $(NAME)
clean:
	rm -rf $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all