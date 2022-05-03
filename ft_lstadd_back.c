/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barbizu- <barbizu-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:51:04 by barbizu-          #+#    #+#             */
/*   Updated: 2022/04/28 12:10:49 by barbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{	
	t_list	*list;

	if (lst)
	{
		if (!*lst)
			*lst = new;
		else
		{
			list = ft_lstlast(*lst);
			list->next = new;
		}
	}
}
