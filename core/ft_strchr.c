/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:46:39 by dcerrito          #+#    #+#             */
/*   Updated: 2022/03/26 19:49:47 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s || c == 0)
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	return (0);
}
