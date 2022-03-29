/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:14:33 by dcerrito          #+#    #+#             */
/*   Updated: 2022/03/29 01:44:41 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	limit;

	i = 0;
	limit = 0;
	while (limit <= len)
	{
		i = 0;
		while (limit + i < len && needle[i] && needle[i] == haystack[i])
			++i;
		if (needle[i] == 0 || len == 0)
			return ((char *)haystack);
		haystack++;
		limit++;
	}
	return (0);
}
