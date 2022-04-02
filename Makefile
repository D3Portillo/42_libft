# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 08:06:16 by dcerrito          #+#    #+#              #
#    Updated: 2022/04/02 04:41:07 by dcerrito         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
PACK = ar rcs
CFLAGS = -Wall -Wextra -Werror -I.
FRM = rm -rf
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
	ft_itoa.c		\
	ft_putchar_fd.c	\
	ft_putendl_fd.c	\
	ft_putnbr_fd.c	\
	ft_putstr_fd.c	\
	ft_split.c		\
	ft_striteri.c	\
	ft_strjoin.c	\
	ft_strmapi.c	\
	ft_strtrim.c	\
	ft_substr.c		\

BONUS_FILES = \
	ft_lstnew.c			\
	ft_lstadd_front.c	\
	ft_lstadd_back.c	\
	ft_lstsize.c		\
	ft_lstlast.c		\
	ft_lstiter.c		\
	ft_lstdelone.c		\
	ft_lstclear.c		\
	ft_lstmap.c			\

CORE_OBJS = $(patsubst %.c, %.o, $(addprefix $(CORE_DIR), $(CORE_FILES)))
UTILS_OBJS = $(patsubst %.c, %.o, $(addprefix $(UTILS_DIR), $(UTILS_FILES)))
BONUS_OBJS = $(patsubst %.c, %.o, $(addprefix $(BONUS_DIR), $(BONUS_FILES)))
OBJS_CORE_UTILS = $(CORE_OBJS) $(UTILS_OBJS)
$(NAME): $(OBJS_CORE_UTILS)
	$(FRM) $(BONUS_OBJS)
	$(PACK) $(NAME) $(OBJS_CORE_UTILS)
all: $(NAME)
bonus: $(BONUS_OBJS)
	$(FRM) $(OBJS_CORE_UTILS)
	$(PACK) $(NAME) $(BONUS_OBJS)
clean:
	$(FRM) $(OBJS_CORE_UTILS) $(BONUS_OBJS)
fclean: clean
	$(FRM) $(NAME)
re: fclean all
.PHONY: clean fclean