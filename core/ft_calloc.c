/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 02:05:25 by dcerrito          #+#    #+#             */
/*   Updated: 2022/03/28 08:31:03 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*alloc;
	size_t	bytes;

	bytes = (count * size);
	alloc = malloc(bytes);
	if (alloc == 0)
		return (0);
	ft_memset(alloc, 0, bytes);
	return (alloc);
}
