/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 04:22:06 by dcerrito          #+#    #+#             */
/*   Updated: 2022/03/29 06:07:08 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *__src, size_t n)
{	
	size_t	i;
	char	*src;

	src = (char *)__src;
	i = -1;
	while (++i, src[i] && (i + 1) < n)
		dest[i] = src[i];
	if (n > 0)
		dest[i] = '\0';
	return (ft_strlen(src));
}
