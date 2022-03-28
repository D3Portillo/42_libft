/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 02:04:24 by dcerrito          #+#    #+#             */
/*   Updated: 2022/03/28 02:04:42 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

void	*ft_memcpy(void *__dst, const void *__src, size_t n);
int		ft_strlen(char *str);

char	*ft_strdup(const char *source)
{
	int		size;
	char	*dest;

	size = ft_strlen(source);
	dest = malloc(size * sizeof(char) + 1);
	if (!dest)
		return (0);
	ft_memcpy(dest, source, size * sizeof(char));
	dest[size - 1] = 0;
	return (dest);
}
