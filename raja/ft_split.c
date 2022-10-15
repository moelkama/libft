/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:59:33 by moelkama          #+#    #+#             */
/*   Updated: 2022/10/10 12:03:56 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_count_strs(char const *s, char c)
{
	int	index;
	int	count_strs;
	int	m;

	count_strs = 0;
	index = 0;
	while (s[index])
	{
		while (s[index] == c)
			index++;
		m = 0;
		while (s[index] && s[index] != c)
		{
			m = 1;
			index++;
		}
		if (m == 1)
			count_strs++;
	}
	return (count_strs);
}

char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		count_strs;
	int		index;
	int		len;

	count_strs = ft_count_strs(s, c);
	strs = (char **)malloc((count_strs + 1) * sizeof(char *));
	index = 0;
	while (index < count_strs)
	{
		while (*s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		strs[index] = (char *)malloc((len + 1) * sizeof(char ));
		len = 0;
		while (*s && *s != c)
			strs[index][len++] = *((char *)s++);
		strs[index][len] = '\0';
		index++;
	}
	strs[index] = 0;
	return (strs);
}
