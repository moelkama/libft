/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:03:53 by moelkama          #+#    #+#             */
/*   Updated: 2022/10/08 18:25:40 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	void	*data;

	new->next = (*lst)->next;
	(*lst)->next = new;
	data = (*lst)->content;
	(*lst)->content = new->content;
	new->content = data;
}
