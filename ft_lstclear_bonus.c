/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 00:31:52 by dcerrito          #+#    #+#             */
/*   Updated: 2022/04/02 03:25:13 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*to_remove;

	if (!lst)
		return ;
	current = *lst;
	while (current)
	{
		del(current->content);
		to_remove = current;
		current = current->next;
		free(to_remove);
	}
	*lst = NULL;
}
