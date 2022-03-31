# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 08:06:16 by dcerrito          #+#    #+#              #
#    Updated: 2022/03/31 06:47:47 by dcerrito         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I .
CORE_DIR = core/
BONUS_DIR = bonus/
UTILS_DIR = utils/
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
	ft_strlcat.c	\

UTILS_FILES = \
	ft_strtrim.c	\

BONUS_FILES = \
	ft_lstnew.c	\

PACK = ar rc
CORE_OBJS = $(patsubst %.c, %.o, $(addprefix $(CORE_DIR), $(CORE_FILES)))
UTILS_OBJS = $(patsubst %.c, %.o, $(addprefix $(UTILS_DIR), $(UTILS_FILES)))
BONUS_OBJS = $(patsubst %.c, %.o, $(addprefix $(BONUS_DIR), $(BONUS_FILES)))
CORE_AND_UTILS = $(CORE_OBJS) $(UTILS_OBJS)
$(NAME): $(CORE_AND_UTILS)
	$(PACK) $(NAME) $(CORE_AND_UTILS)
all: $(NAME)
bonus: $(BONUS_OBJS)
	$(PACK) $(NAME) $(BONUS_OBJS)
clean:
	rm -rf $(CORE_AND_UTILS)
	rm -rf $(BONUS_OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all