/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moelkama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 13:50:50 by moelkama          #+#    #+#             */
/*   Updated: 2022/10/15 10:19:58 by moelkama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_return_nbr(const char *str, int i, int k)
{
	int	pow;
	int	s;

	s = 0;
	pow = 1;
	while (str[i] <= '9' && str[i] >= '0')
	{
		s -= (str[i] - 48) * pow;
		pow *= 10;
		i--;
	}
	if (k == 0)
		return (-s);
	return (s);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	k;
	int	s;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	k = 0;
	if (*str == '-' || *str == '+')
	{	
		if (*str == '-')
			k++;
		str++;
	}
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	i--;
	s = ft_return_nbr(str, i, k);
	return (s);
}
