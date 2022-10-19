/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <moelkama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:20:56 by moelkama          #+#    #+#             */
/*   Updated: 2022/10/16 14:48:43 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*list;
	t_list	*ptr;

	(void )(del);
	list = lst;
	ptr = ft_lstnew(f(list->content));
	while (list->next && ptr)
	{
		list = list->next;
		ft_lstadd_back(&ptr, ft_lstnew(f(list->content)));
	}
	return (ptr);
}
