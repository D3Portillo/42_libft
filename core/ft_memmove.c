/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 18:45:03 by dcerrito          #+#    #+#             */
/*   Updated: 2022/03/26 22:26:11 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *__dst, const void *__src, size_t n);

void	*ft_memmove(void *__dest, const void *__src, size_t n)
{
	const char	*src;
	char		*dest;

	dest = __dest;
	src = __src;
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	while (n--)
		*(dest + n) = *(src + n);
	return (__dest);
}
