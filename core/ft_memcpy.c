/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 12:04:45 by dcerrito          #+#    #+#             */
/*   Updated: 2022/03/26 18:51:02 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *restrict __dst, const void *restrict __src, size_t n)
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
