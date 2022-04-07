/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 03:09:16 by dcerrito          #+#    #+#             */
/*   Updated: 2022/04/07 21:30:58 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	buffer_size(char *str, char delimiter, int i)
{
	while (*str)
	{
		if (*str != delimiter && (str[1] == delimiter || !str[1]))
			++i;
		++str;
	}
	return (i);
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

static int	freed_content(char **content, int elems, int free_content)
{
	if (free_content)
	{
		while (elems--)
			free(content[elems]);
		free(content);
	}
	return (free_content);
}

char	**ft_split(char const *__str, char delimiter)
{
	char	**result;
	char	*str;
	char	*head;
	int		elems;
	int		i;

	if (!set_buffer(&str, (char *)__str))
		return (NULL);
	result = malloc(sizeof(char *) * buffer_size((head = str), delimiter, 1));
	if (set_zero(&elems), set_zero(&i), !result)
		return (NULL);
	while (*str)
	{
		if (*str != delimiter && (str[1] == delimiter || !str[1]))
		{
			result[elems++] = ft_substr(&str[-i], 0, set_zero(&i) + 1);
			if (freed_content(result, elems - 1, !result[elems - 1]))
				return (NULL);
		}
		else if (*str != delimiter)
			++i;
		++str;
	}
	return (set_buffer(&result[elems], NULL), result);
}
