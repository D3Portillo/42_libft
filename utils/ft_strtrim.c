/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 06:40:28 by dcerrito          #+#    #+#             */
/*   Updated: 2022/04/05 21:49:17 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *__src, char const *set)
{
	char	*src;
	int		latest_idx;

	if (!__src || !set)
		return (NULL);
	src = (char *)__src;
	while (*src && ft_strchr(set, *src))
		src++;
	latest_idx = ft_strlen(src);
	while (latest_idx && ft_strchr(set, src[latest_idx]))
		latest_idx--;
	return (ft_substr(src, 0, latest_idx + 1));
}
