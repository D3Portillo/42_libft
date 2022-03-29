/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 04:45:33 by dcerrito          #+#    #+#             */
/*   Updated: 2022/03/29 02:30:02 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	if (c == '\t' || c == '\n'
		|| c == '\v' || c == '\f'
		|| c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	long long int	result;
	int				multiplier;
	int				i;

	multiplier = 1;
	result = 0;
	i = 0;
	while (is_space(*str))
		++str;
	if (*str == '-')
		multiplier = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (ft_isdigit(*str))
	{
		if (++i >= 18)
		{
			if (multiplier == 1)
				return (-1);
			return (0);
		}
		result = (result * 10) + (*str++ - '0');
	}
	return (result * multiplier);
}
