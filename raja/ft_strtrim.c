/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 20:43:08 by moelkama          #+#    #+#             */
/*   Updated: 2022/10/11 18:00:09 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isexist(char *str, char c)
{
	while (*str)
		if (*(str++) == c)
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	start;
	size_t	end;
	size_t	index;

	start = 0;
	while (s1[start] && ft_isexist((char *)set, s1[start]))
		start++;
	end = ft_strlen(s1) - 1;
	while (end >= 0 && ft_isexist((char *)set, s1[end]))
		end--;
	str = (char *)malloc((end - start + 2) * sizeof(char ));
	if (str)
	{
		index = 0;
		while (index < end - start + 1)
		{
			str[index] = s1[start + index];
			index++;
		}
		str[index] = '\0';
		return (str);
	}
	return (NULL);
}
