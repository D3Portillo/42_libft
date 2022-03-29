/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 02:04:24 by dcerrito          #+#    #+#             */
/*   Updated: 2022/03/28 08:33:28 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *source)
{
	int		size;
	char	*dest;

	size = ft_strlen((char *)source);
	dest = malloc(size * sizeof(char) + 1);
	if (!dest)
		return (0);
	ft_memcpy(dest, source, size * sizeof(char));
	dest[size] = 0;
	return (dest);
}
