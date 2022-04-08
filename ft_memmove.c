/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 18:45:03 by dcerrito          #+#    #+#             */
/*   Updated: 2022/03/29 06:27:02 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *__dest, const void *__src, size_t n)
{
	char	*src;
	char	*dest;

	dest = __dest;
	src = (char *)__src;
	if (src >= dest)
		return (ft_memcpy(dest, src, n));
	while (n--)
		*(dest + n) = *(src + n);
	return (__dest);
}
