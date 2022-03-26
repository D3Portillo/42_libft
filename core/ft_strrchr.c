/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 19:46:39 by dcerrito          #+#    #+#             */
/*   Updated: 2022/03/26 20:12:54 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	const char	*ptr;

	ptr = 0;
	while (*s)
	{
		if (*s == c)
			ptr = s;
		s++;
	}
	if (c == 0)
		ptr = s;
	return ((char *)ptr);
}
