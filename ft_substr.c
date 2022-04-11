/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 03:09:32 by dcerrito          #+#    #+#             */
/*   Updated: 2022/04/11 04:01:09 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t size)
{
	char	*result;
	size_t	size_to_create;
	size_t	str_len;

	if (!src)
		return (NULL);
	str_len = ft_strlen((char *)src);
	size_to_create = (str_len);
	if (size < size_to_create)
		size_to_create = size;
	result = ft_calloc(size_to_create + 1, sizeof(char));
	if (!result)
		return (NULL);
	if (start > str_len)
		return (result);
	ft_memcpy(result, &src[start], size_to_create);
	return (result);
}
