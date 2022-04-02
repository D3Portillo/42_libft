/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 03:09:32 by dcerrito          #+#    #+#             */
/*   Updated: 2022/04/02 11:16:31 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *src, unsigned int start, size_t size)
{
	char	*result;

	if (!src)
		return (NULL);
	result = ft_calloc(size + 1, sizeof(char));
	if (!result)
		return (NULL);
	if (start >= size)
		return (result);
	ft_memcpy(result, &src[start], size);
	return (result);
}
