/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 04:45:33 by dcerrito          #+#    #+#             */
/*   Updated: 2022/04/09 20:28:07 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	return (
		c == '\t' || c == '\n'
		|| c == '\v' || c == '\f'
		|| c == '\r' || c == ' '
	);
}

int	ft_atoi(const char *str)
{
	size_t	result;
	int		multiplier;

	multiplier = 1;
	result = 0;
	while (is_space(*str))
		++str;
	if (*str == '-')
		multiplier = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (ft_isdigit(*str))
	{
		result = (result * 10) + (*str++ - '0');
		if (result > LONG_MAX && multiplier == -1)
			return (0);
		if (result > LONG_MAX && multiplier == 1)
			return (-1);
	}
	return (result * multiplier);
}
