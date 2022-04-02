/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 04:30:17 by dcerrito          #+#    #+#             */
/*   Updated: 2022/04/02 07:37:58 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

// Imports standard types definition, ie: size_t
# include <stddef.h>
// Imports standard unix write
# include <unistd.h>
// Imports standard library for malloc
# include <stdlib.h>
// Import limits definition for INT_MAX, LONG_MAX
# include <limits.h>

/*
 /////////////////////////////////////////////////
 * CORE FUNCTIONS
 * Functions that mimic those from common c, std and string libs.
**/
int		ft_atoi(const char *str);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_strlen(char *str);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
/**
 * Copies n bytes from src to dst.
 * @param dst Destination buffer
 * @param src Buffer to copy from
 * @param n Elements to copy
 */
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memset(void *__dest, int c, size_t n);
void	ft_bzero(char *str, int amount);
void	*ft_calloc(size_t count, size_t size);
void	*ft_memchr(const void *haystack, int char_to_search, size_t n);
char	*ft_strchr(const char *haystack, int char_to_search);
char	*ft_strdup(const char *str);
char	*ft_strnstr(const char *haystack, const char *to_search, size_t n);
char	*ft_strrchr(const char *haystack, int char_to_search);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);

/*
 /////////////////////////////////////////////////
 * HELPER FUNCTIONS
 * Complementary functions using core utilities.
**/
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

/*
 /////////////////////////////////////////////////
 * BONUS FUNCTIONS
 * Extra function helpers : )
**/
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
int		ft_lstsize(t_list *lst);

#endif