/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 03:09:08 by dcerrito          #+#    #+#             */
/*   Updated: 2022/04/11 21:53:57 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	appends(long int n, int fd)
{
	if (n < 0 && write(fd, "-", 1))
		n *= -1;
	if (n < 10)
		return (ft_putchar_fd(n + '0', fd));
	return (appends(n / 10, fd), appends(n % 10, fd));
}

void	ft_putnbr_fd(int n, int fd)
{
	if (fd >= 0)
		appends(n, fd);
}
