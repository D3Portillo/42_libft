/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 04:30:17 by dcerrito          #+#    #+#             */
/*   Updated: 2022/04/08 14:29:35 by dcerrito         ###   ########.fr       */
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

/**
 * Converts and returns the decimal int value of a charset.
 * @param str Content to be int parsed
 */
int		ft_atoi(const char *str);

/**
 * Iterates over `buffer1` and returns a positive value if `buffer2`
 * contains an element ascii sized greater than `buffer2`.
 * Furthermore if the value is negative `buffer2` has an element ascii greater
 * than `buffer1`.
 * NOTE: Function resolves with 0 if both Buffers are equal before `limit`
 * @param buffer1 Buffer be compared
 * @param buffer2 Buffer to compare vs `str1`
 * @param limit Max elements to iterate over `haystack`
 */
int		ft_memcmp(const void *buffer1, const void *buffer2, size_t limit);

/**
 * Returns 1 if the char `c` is a Character or a digit
 * and 0 if it's not.
 * @param c Ascii decimal evaluate
 */
int		ft_isalnum(int c);

/**
 * Returns 1 if the char `c` is a Character and 0 if not.
 * @param c Ascii decimal evaluate
 */
int		ft_isalpha(int c);

/**
 * Returns 1 if the char `c` int the ascii range (0 - 127)
 * and 0 if it's not.
 * @param c Ascii decimal evaluate
 */
int		ft_isascii(int c);

/**
 * Returns 1 if the char `c` is a digit or 0 if it's NOT.
 * @param c Ascii decimal evaluate
 */
int		ft_isdigit(int c);

/**
 * Returns 1 if the char `c` is writeable
 * using unistd write function or 0 if it's not.
 * @param c Ascii decimal evaluate
 */
int		ft_isprint(int c);

/**
 * Returns the size of a char set
 * @param str String buffer to size
 */
int		ft_strlen(const char *str);

/**
 * Turns an uppercase char into it's lowercase value
 * @param c Ascii decimal char to modify
 */
int		ft_tolower(int c);

/**
 * Turns a lowercase char into it's uppercase value
 * @param c Ascii decimal char to modify
 */
int		ft_toupper(int c);

/**
 * Iterates over `str1` and returns a positive value if `str1`
 * contains an element ascii sized greater than `str2`.
 * Furthermore if the value is negative `str2` has an element ascii greater
 * than `str1`.
 * NOTE: Function resolves with 0 if both strings are equal before `limit`
 * @param str1 Buffer be compared
 * @param str2 Buffer to compare vs `str1`
 * @param limit Max elements to iterate over `haystack`
 */
int		ft_strncmp(const char *str1, const char *str2, size_t limit);

/**
 * Copies n bytes from src to dst.
 * @param dst Destination buffer
 * @param src Buffer to copy from
 * @param n Elements to copy
 */
void	*ft_memcpy(void *dst, const void *src, size_t n);

/**
 * Copies n bytes from src to dst. Handles overflow by reverse
 * copying if pointer contents are equal.
 * @param dst Destination buffer
 * @param src Buffer to copy from
 * @param n Elements to copy
 */
void	*ft_memmove(void *dst, const void *src, size_t n);

/**
 * Sets each element from buffer to be `c`
 * @param dst Destination buffer
 * @param c Char set each buffer element
 * @param size Buffer size
 */
void	*ft_memset(void *dst, int c, size_t size);

/**
 * Sets each element from buffer to be `\0`
 * @param str Buffer to modify
 * @param size Max buffer size
 */
void	ft_bzero(char *str, int size);

/**
 * Allocates a buffer and sets each element to `\0`
 * @param count Elements to allocate
 * @param size Size to allocate per item
 */
void	*ft_calloc(size_t count, size_t size);

/**
 * Search and returns a pointer to the first element
 * equal to `char_to_search` found in haystack buffer
 * NOTE: If no element found the return value equals NULL
 * @param haystack Buffer to search from
 * @param char_to_search Unsigned char decimal value to look after
 * @param limit Max elements to iterate over `haystack`
 */
void	*ft_memchr(const void *haystack, int char_to_search, size_t limit);

/**
 * Search and returns a pointer to the last element
 * equal to `char_to_search` in haystack string or
 * NULL if nothing found.
 * NOTE: ft_strchr expects haystack to be a NULL terminated string
 * @param haystack Buffer to search from
 * @param char_to_search Unsigned char decimal value to look after
 */
char	*ft_strchr(const char *haystack, int char_to_search);

/**
 * Search and returns a pointer to the last element
 * equal to `char_to_search` in haystack string or
 * NULL if nothing found.
 * NOTE: ft_strchr expects haystack to be a NULL terminated string
 * @param haystack Buffer to search from
 * @param char_to_search Unsigned char decimal value to look after
 */
char	*ft_strrchr(const char *haystack, int char_to_search);

/**
 * Allocates space to duplicate and string and returns its buffer
 * @param str String to duplicate
 */
char	*ft_strdup(const char *str);

/**
 * Search and returns a pointer to the last element
 * equal to `char_to_search` found in haystack buffer
 * @param haystack Buffer to search from
 * @param needle Unsigned char decimal value to look after
 * @param limit Max elements to iterate over `haystack`
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t limit);

/**
 * Copies up to `max_size` elements form `genesis` into dest
 * buffer NULL terminating `dest`buffer.
 * NOTE: You must include space for `\0` in `max_size`
 * @param dest Buffer to copy data at
 * @param genesis Buffer to copy data from
 * @param max_size Max elements to copy from `genesis`
 */
size_t	ft_strlcpy(char *dest, const char *genesis, size_t max_size);

/**
 * Appends content from `to_append` into `dest` buffer and NULL
 * terminates it as string. `max_size` will be the maximum total
 * lenght of the resulting string.
 * NOTE: You must include space for `\0` in `max_size`
 * @param dest Buffer to copy data at
 * @param to_append Buffer to copy data from
 * @param max_size Max elements to copy from `genesis`
 */
size_t	ft_strlcat(char *dest, const char *to_append, size_t max_size);

/*
 /////////////////////////////////////////////////
 * HELPER FUNCTIONS
 * Complementary functions using core utilities.
**/

/**
 * Removes any element from `set` at start and begining of `source`
 * NOTE: `source` must be a NULL terminated string
 * @param source String to be trimmed
 * @param set Elements to be removed from start and begining of `source`
 */
char	*ft_strtrim(char const *source, char const *set);

/**
 * Creates and returns a new string from `source` at index `start_idx`.
 * The new string cannot be longer tha `limit`
 * @param source String buffer to be shrinked
 * @param start_idx Index position to start copying elements from `source`
 * @param limit Maximum elements to take from `source`
 */
char	*ft_substr(char const *source, unsigned int start_idx, size_t limit);

/**
 * Creates and returns a new string from `source`.
 * Each element is created by using the `f` function and 
 * map it's content.
 * @param source String buffer to be mapped
 * @param f Function to be called for each buffer element
 */
char	*ft_strmapi(char const *source, char (*f)(unsigned int, char));

/**
 * Creates and return a new string composed by str1 + str2
 * @param str1 First string buffer to be appended
 * @param str2 Last string buffer to append
 */
char	*ft_strjoin(char const *str1, char const *str2);

/**
 * Splits the string `source` as a Buffer of strings.
 * NOTE: Last string buffer element is NULL to indicate it's limit
 * @param source String buffer to be splitted
 * @param delimiter Character to separate content at
 */
char	**ft_split(char const *source, char delimiter);

/**
 * Returns the string representation of the number `n`.
 * @param n Number to be parsed
 */
char	*ft_itoa(int n);

/**
 * Appends the string `str` to a File Descriptor `fd`
 * @param str Char set to append
 * @param fd Your File Descriptor
 */
void	ft_putstr_fd(char *str, int fd);

/**
 * Appends the number `n` to a File Descriptor `fd`
 * @param n Number to append
 * @param fd Your File Descriptor
 */
void	ft_putnbr_fd(int n, int fd);

/**
 * Appends the string `str` to a File Descriptor `fd`
 * @param str Char set to append
 * @param fd Your File Descriptor
 */
void	ft_putendl_fd(char *str, int fd);

/**
 * Appends the char `c` to a File Descriptor `fd`
 * @param c Character to append
 * @param fd Your File Descriptor
 */
void	ft_putchar_fd(char c, int fd);

/**
 * Iterates over the string `str` and invokes function `f`
 * to possible map or convert it's content.
 * NOTE: `f` expects the element index and it's value reference
 * @param str Your string buffer
 * @param f The function to call for each buffer element
 */
void	ft_striteri(char *str, void (*f)(unsigned int, char*));

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

/**
 * Creates a new t_list struct item and appends the content `content`
 * @param content Content to initialize the new list with.
 */
t_list	*ft_lstnew(void *content);

/**
 * Returns the last element from a list
 * @param lst The first element from your list
 */
t_list	*ft_lstlast(t_list *lst);

/**
 * Creates a new list of t_list items mapping over each element
 * and applying the function `f` to that new element.
 * @param lst The first element from your list
 * @param del Function to be called whenever a content needs to be removed
 * @param f Function to be invoked whenever an element is iterated
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/**
 * Appends a t_list item to the begining of your list.
 * @param lst The first element from your list
 * @param new New item to be added
 */
void	ft_lstadd_front(t_list **lst, t_list *new);

/**
 * Appends a t_list item to the end of your t_list's list.
 * @param lst The first element from your list
 * @param new New item to be added
 */
void	ft_lstadd_back(t_list **lst, t_list *new);

/**
 * Iterates over each element from your list `lst` and removes it.
 * @param lst A pointer to the first element from your list
 * @param del Function to be called whenever a content needs to be removed
 */
void	ft_lstclear(t_list **lst, void (*del)(void*));

/**
 * Removes the element `lst` and frees it's content.
 * @param lst The first element from your list
 * @param del Function to be called whenever a content needs to be removed
 */
void	ft_lstdelone(t_list *lst, void (*del)(void*));

/**
 * Applies `f` to map the content of each t_list item in your list.
 * @param lst The first element from your list
 * @param f Function to be called for each t_list item content
 */
void	ft_lstiter(t_list *lst, void (*f)(void *));

/**
 * Returns the size of your list
 * @param lst The first element from your list
 */
int		ft_lstsize(t_list *lst);

#endif