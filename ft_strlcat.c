/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 04:22:06 by dcerrito          #+#    #+#             */
/*   Updated: 2022/03/29 06:23:24 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *__src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	result;
	size_t	dest_size;
	char	*src;

	src = (char *)__src;
	dest_size = ft_strlen(dest);
	i = dest_size;
	j = 0;
	while (src[j] && (i + 1) < n)
		dest[i++] = src[j++];
	if (n > 0 && dest_size <= n)
		dest[i] = '\0';
	result = ft_strlen(src);
	if (dest_size > n)
		result += n;
	else
		result += dest_size;
	return (result);
}
