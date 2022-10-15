/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 16:06:42 by moelkama          #+#    #+#             */
/*   Updated: 2022/10/15 10:54:03 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	index;

	if (size >= SIZE_MAX && count >= SIZE_MAX)
		return (NULL);
	ptr = (void *)malloc(count * size);
	if (ptr)
	{
		index = 0;
		while (index < count)
			((char *)ptr)[index++] = 0;
		return (ptr);
	}
	return (NULL);
}
#include <stdio.h>
int	main(void)
{
	void	*p;
	void	*q;
	size_t	size;
	size_t	count;
	size_t	index;

	size = 4;
	count = 8;
	p = calloc(count, size);
	q = ft_calloc(count, size);
	index = 1;
	//printf("%lld\t%lld\n", ((long long *)p)[index], ((long long *)q)[index]);
	printf("%zu", SIZE_MA:X);
	index++;
}
