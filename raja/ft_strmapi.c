/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:14:45 by moelkama          #+#    #+#             */
/*   Updated: 2022/10/08 16:41:49 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

size_t	ft_strlen(char const *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	index;

	index = 0;
	str = (char *)malloc((ft_strlen(s) + 1) * sizeof(char ));
	if (str)
	{
		while (s[index])
		{
			str[index] = f(index, ((char *)s)[index]);
			index++;
		}
		str[index] = '\0';
		return (str);
	}
	return (NULL);
}
