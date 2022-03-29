/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 03:45:46 by dcerrito          #+#    #+#             */
/*   Updated: 2022/03/28 04:47:49 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *__dest, int c, size_t len)
{
	char	*dest;

	dest = __dest;
	while (len--)
		*(dest + len) = c;
	return (__dest);
}
