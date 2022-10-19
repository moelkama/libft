/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 18:38:02 by moelkama          #+#    #+#             */
/*   Updated: 2022/10/16 13:24:07 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*list;
	int		i;

	list = lst;
	i = 0;
	while (list)
	{
		i++;
		list = list->next;
	}
	return (i);
}
/*#include <stdio.h>
int	main(void)
{
	t_list * l =  NULL;
	printf("%d\n", ft_lstsize(l));
	ft_lstadd_front(&l, ft_lstnew((void*)1));
	printf("%d\n",ft_lstsize(l));
	ft_lstadd_front(&l, ft_lstnew((void*)2));
	printf("%d\n", ft_lstsize(l) == 2);
	free(l);
	return (0);
}*/
