/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barbizu- <barbizu-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 12:54:28 by barbizu-          #+#    #+#             */
/*   Updated: 2022/04/29 11:30:24 by barbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*new;

	list = NULL;
	if (f && del)
	{
		while (lst)
		{
			new = ft_lstnew((*f)(lst->content));
			if (!new)
			{
				ft_lstclear(&list, del);
				return (NULL);
			}
			ft_lstadd_back(&list, new);
			lst = lst->next;
		}
		return (list);
	}
	return (NULL);
}
