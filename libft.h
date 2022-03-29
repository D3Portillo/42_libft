/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 04:30:17 by dcerrito          #+#    #+#             */
/*   Updated: 2022/03/28 08:53:05 by dcerrito         ###   ########.fr       */
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

#endif