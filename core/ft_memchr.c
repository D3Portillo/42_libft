/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 22:19:58 by dcerrito          #+#    #+#             */
/*   Updated: 2022/03/26 22:20:55 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *__s, int c, size_t n)
{
	const char	*s;

	s = __s;
	while (n--)
	{
		if (*s == c)
			return ((void *)s);
		s++;
	}
	return (0);
}
