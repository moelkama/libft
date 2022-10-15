/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:29:28 by moelkama          #+#    #+#             */
/*   Updated: 2022/10/10 14:56:54 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	index;

	str = (char *)malloc((len + 1) * sizeof(char ));
	if (str)
	{
		index = 0;
		while (s[start] && index < len)
			str[index++] = s[start++];
		while (index <= len)
			str[index++] = '\0';
		return (str);
	}
	return (NULL);
}
