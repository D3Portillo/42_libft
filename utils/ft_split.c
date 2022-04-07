/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 03:09:16 by dcerrito          #+#    #+#             */
/*   Updated: 2022/04/07 10:23:51 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_result_size(const char *__str, char separator)
{
	int		i;
	char	*str;

	str = (char *)__str;
	i = 0;
	while (*str)
	{
		if (*str == separator && str[1] != separator)
			++i;
		++str;
	}
	return (i + 2);
}

static char	*get_buffer(char *head)
{
	return (malloc(sizeof(char) * (ft_strlen(head) + 1)));
}

static int	set_zero(int *n)
{
	int	init_state;

	init_state = *n;
	return (*n = 0, init_state);
}

static void	*set_buffer(char **buffer, char *content)
{
	return (*buffer = content);
}

char	**ft_split(char const *__str, char separator)
{
	char	**result;
	char	*str;
	char	*head;
	int		elems;
	int		i;

	if (!set_buffer(&str, ft_strtrim(__str, &separator)))
		return (NULL);
	result = malloc(sizeof(char *) * get_result_size((head = str), separator));
	if (!result)
		return (NULL);
	if (set_zero(&elems), set_zero(&i), *head)
		result[elems] = get_buffer(head);
	while (*str)
	{
		if (*str != separator)
			result[elems][i++] = *str;
		else if (str[1] != separator
			&& set_buffer(&result[elems + 1], get_buffer(head)))
			result[elems++][set_zero(&i)] = '\0';
		++str;
	}
	if (separator && *head)
		result[elems++][i] = '\0';
	return (set_buffer(&result[elems], NULL), free(head), result);
}
