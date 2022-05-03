/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: barbizu- <barbizu-@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/28 11:35:40 by barbizu-          #+#    #+#             */
/*   Updated: 2022/04/28 11:43:54 by barbizu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*list;
	int		cnt;

	cnt = 0;
	list = lst;
	while (list)
	{
		list = list->next;
		cnt++;
	}
	return (cnt);
}
