/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 03:09:32 by dcerrito          #+#    #+#             */
/*   Updated: 2022/04/06 04:22:38 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t size)
{
	char			*result;
	unsigned int	size_to_create;

	if (!src)
		return (NULL);
	size_to_create = ft_strlen((char *)src);
	if (size < size_to_create)
		size_to_create = size;
	result = ft_calloc(size_to_create + 1, sizeof(char));
	if (!result)
		return (NULL);
	if (start > size || start > size_to_create)
		return (result);
	ft_memcpy(result, &src[start], size_to_create);
	return (result);
}
