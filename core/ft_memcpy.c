/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 12:04:45 by dcerrito          #+#    #+#             */
/*   Updated: 2022/03/26 22:26:03 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *__dst, const void *__src, size_t n)
{
	size_t		i;
	char		*dst;
	const char	*src;

	src = __src;
	dst = __dst;
	i = -1;
	while (++i, i < n)
		dst[i] = src[i];
	return (__dst);
}
