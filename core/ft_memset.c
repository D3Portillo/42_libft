/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 03:45:46 by dcerrito          #+#    #+#             */
/*   Updated: 2022/03/26 18:56:07 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *__dest, int c, size_t len)
{
	char	*dest;

	dest = __dest;
	while (len--)
		*(dest + len) = c;
	return (__dest);
}
