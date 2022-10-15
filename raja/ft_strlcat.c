/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 09:29:47 by moelkama          #+#    #+#             */
/*   Updated: 2022/10/07 18:25:28 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	src_len;
	size_t	dest_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	if (dstsize <= dest_len || dstsize == 0)
		return (dstsize + src_len);
	i = dest_len;
	j = 0;
	while (src[i] && i < dstsize - 1)
		dest[i++] = src[j++];
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
