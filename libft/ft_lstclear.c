/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 11:24:08 by moelkama          #+#    #+#             */
/*   Updated: 2022/10/17 16:05:50 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	**list;
	t_list	**ptr;

	list = lst;
	while (*list)
	{
		ptr = list;
		del((*list)->content);
		list = &((*list)->next);
		free(*ptr);
	}
}
