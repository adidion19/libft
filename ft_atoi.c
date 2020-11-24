/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 09:09:45 by adidion           #+#    #+#             */
/*   Updated: 2020/11/24 10:30:20 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	unsigned long long			i;
	unsigned long long			ans;
	int							neg;

	i = 0;
	ans = 0;
	neg = 1;
	while (str[i] == '\n' || str[i] == '\f' || str[i] == ' '
			|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = neg * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		ans = ans * 10;
		ans = ans + str[i] - '0';
		i++;
	}
	ans = ans * neg;
	return ((int)ans);
}
