# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/28 08:06:16 by dcerrito          #+#    #+#              #
#    Updated: 2022/04/09 22:00:36 by dcerrito         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
PACK = ar rcs
CFLAGS = -Wall -Wextra -Werror
FRM = rm -rf
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
	ft_lstnew_bonus.c		\
	ft_lstadd_front_bonus.c	\
	ft_lstadd_back_bonus.c	\
	ft_lstsize_bonus.c		\
	ft_lstlast_bonus.c		\
	ft_lstiter_bonus.c		\
	ft_lstdelone_bonus.c	\
	ft_lstclear_bonus.c		\
	ft_lstmap_bonus.c		\

CORE_OBJS = $(patsubst %.c, %.o, $(CORE_FILES))
UTILS_OBJS = $(patsubst %.c, %.o, $(UTILS_FILES))
BONUS_OBJS = $(patsubst %.c, %.o, $(BONUS_FILES))
OBJS_CORE_UTILS = $(CORE_OBJS) $(UTILS_OBJS)
DEFAULT_PART = .default
BONUS_PART = .bonus

$(NAME): $(DEFAULT_PART)
$(DEFAULT_PART): $(OBJS_CORE_UTILS)
	$(PACK) $(NAME) $(OBJS_CORE_UTILS)
	@$(FRM) $(BONUS_PART)
	@touch $(DEFAULT_PART)
$(BONUS_PART): $(BONUS_OBJS)
	$(PACK) $(NAME) $(BONUS_OBJS)
	@$(FRM) $(DEFAULT_PART)
	@touch $(BONUS_PART)
all: $(DEFAULT_PART)
bonus: $(BONUS_PART)
clean:
	$(FRM) $(OBJS_CORE_UTILS) $(BONUS_OBJS)
	$(FRM) $(DEFAULT_PART) $(BONUS_PART)
fclean: clean
	$(FRM) $(NAME)
re: fclean all
.PHONY: re clean fclean bonus all