/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:14:33 by dcerrito          #+#    #+#             */
/*   Updated: 2022/03/28 01:08:03 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;

	while (*haystack)
	{
		i = 0;
		while (needle[i] && needle[i] == haystack[i])
			++i;
		if (needle[i] == 0)
			return (haystack);
		haystack++;
	}
	return (0);
}
