/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:29:47 by moelkama          #+#    #+#             */
/*   Updated: 2022/10/17 15:02:02 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dest_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (dstsize <= dest_len)
		return (dstsize + src_len);
	i = dest_len;
	j = 0;
	while (src[j] && i < dstsize - 1)
		dest[i++] = src[j++];
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*#include <stdio.h>
#include <string.h>
#include <ctype.h>
int	main(void)
{	
	char dest[30];
	memset(dest, 0, 30);
	char * src = "AAAAAAAAA";
	dest[0] = 'B';
	printf("%zu\n", strlcat(dest,src, -1));
}*/
