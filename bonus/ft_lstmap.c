/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 02:02:42 by dcerrito          #+#    #+#             */
/*   Updated: 2022/04/02 04:02:35 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*head;

	if (!lst)
		return (NULL);
	result = ft_lstnew(f(lst->content));
	if (!result)
		return (NULL);
	head = result;
	lst = lst->next;
	while (lst)
	{
		result->next = ft_lstnew(f(lst->content));
		if (result->next == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		result = result->next;
		lst = lst->next;
	}
	return (head);
}
