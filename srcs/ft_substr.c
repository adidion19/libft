/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 17:21:03 by adidion           #+#    #+#             */
/*   Updated: 2020/11/20 09:22:58 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ans;
	int		i;
	int		j;

	j = 0;
	if (!(ans = malloc(sizeof(char) * len + 1)))
		return (0);
	i = start;
	len = len + start;
	while (s[i] && i < len)
	{
		ans[j] = s[i];
		j++;
		i++;
	}
	ans[j] = '\0';
	return (ans);
}
