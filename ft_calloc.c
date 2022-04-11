/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 02:05:25 by dcerrito          #+#    #+#             */
/*   Updated: 2022/04/11 16:15:09 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*alloc;
	size_t	bytes;

	if (count && SIZE_MAX / count < size)
		return (NULL);
	alloc = malloc((bytes = count * size));
	if (!alloc)
		return (NULL);
	ft_memset(alloc, 0, bytes);
	return (alloc);
}
