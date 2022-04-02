/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 03:09:27 by dcerrito          #+#    #+#             */
/*   Updated: 2022/04/02 10:44:00 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char	*result;
	int		i;

	if (!str)
		return (NULL);
	result = malloc(ft_strlen((void *)str) * sizeof(char) + 1);
	i = -1;
	if (!result)
		return (NULL);
	while (++i, *str)
		result[i] = f(i, *str++);
	result[i] = 0;
	return (result);
}
