/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 03:45:46 by dcerrito          #+#    #+#             */
/*   Updated: 2022/03/23 04:10:52 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_memset(char *ptr, int c, unsigned int len);

void	ft_bzero(char *str, int amount)
{
	ft_memset(str, 0, amount);
}
