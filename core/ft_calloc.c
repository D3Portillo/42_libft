/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 02:05:25 by dcerrito          #+#    #+#             */
/*   Updated: 2022/03/28 02:05:26 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memset(void *__dest, int c, size_t len);

void	*ft_calloc(size_t count, size_t size)
{
	void	*alloc;
	size_t	bytes;

	bytes = (count * size) + 1;
	if (bytes < 1)
		return (0);
	alloc = malloc(bytes);
	ft_memset(alloc, 0, bytes);
	return (alloc);
}
