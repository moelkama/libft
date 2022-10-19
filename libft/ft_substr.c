/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 15:29:28 by moelkama          #+#    #+#             */
/*   Updated: 2022/10/17 16:20:26 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count(char const *s, unsigned int start, size_t len)
{
	if (len > ft_strlen(s) - start && start < ft_strlen(s))
		return (ft_strlen(s) - start);
	else if (len <= ft_strlen(s) - start && start < ft_strlen(s))
		return (len);
	return (0);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	index;

	str = (char *)malloc((ft_count(s, start, len) + 1) * sizeof(char ));
	if (str)
	{
		index = 0;
		while (s[start] && index < len && ft_count(s, start, len))
			str[index++] = s[start++];
		str[index] = '\0';
		return (str);
	}
	return (NULL);
}
/*#include <stdio.h>
int	main(void)
{
	char *s = "KLMNOPQRS";
	int	start = 4;
	int	len = 5;
	printf("%s\n", ft_substr(s, start, len));
}*/
