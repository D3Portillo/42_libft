/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 03:08:54 by dcerrito          #+#    #+#             */
/*   Updated: 2022/04/06 00:44:48 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_size(long int n, int isZeroOrNeg)
{
	int	size;

	size = isZeroOrNeg;
	while (++size, n > 0)
		n /= 10;
	return (size);
}

char	*ft_itoa(int __n)
{
	char		*result;
	int			size;
	long int	n;
	int			i;

	n = __n;
	if (n < 0)
		n *= -1;
	size = get_size(n, __n <= 0);
	result = ft_calloc(size, sizeof(char));
	if (!result)
		return (NULL);
	i = 1;
	while (++i, n > 0)
	{
		result[size - i] = (n % 10) + '0';
		n /= 10;
	}
	if (__n == 0)
		*result = '0';
	if (__n < 0)
		*result = '-';
	return (result);
}
