/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcerrito <dcerrito@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 02:02:42 by dcerrito          #+#    #+#             */
/*   Updated: 2022/04/07 20:35:48 by dcerrito         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*head;
	void	*content;

	if (!lst)
		return (NULL);
	content = f(lst->content);
	result = ft_lstnew(content);
	if (!result)
		return (del(content), NULL);
	head = result;
	lst = lst->next;
	while (lst)
	{
		content = f(lst->content);
		result->next = ft_lstnew(content);
		if (result->next == NULL)
			return (del(content), ft_lstclear(&head, del), NULL);
		result = result->next;
		lst = lst->next;
	}
	return (head);
}
