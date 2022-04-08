/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:14:33 by dcerrito          #+#    #+#             */
/*   Updated: 2022/03/29 02:40:31 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *__s1, const void *__s2, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;
	size_t			i;

	i = -1;
	s1 = (void *)__s1;
	s2 = (void *)__s2;
	while (++i, i < n)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}
