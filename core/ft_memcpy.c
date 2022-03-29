/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 12:04:45 by dcerrito          #+#    #+#             */
/*   Updated: 2022/03/28 08:35:30 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *__dst, const void *__src, size_t n)
{
	size_t		i;
	char		*dst;
	const char	*src;

	src = __src;
	dst = __dst;
	i = -1;
	if (src == 0 && dst == 0)
		return (0);
	while (++i, i < n)
		dst[i] = src[i];
	return (__dst);
}
