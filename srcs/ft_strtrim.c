/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:16:56 by adidion           #+#    #+#             */
/*   Updated: 2020/11/19 17:00:49 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		len_fin(char *s1, char *set)
{
	int i;
	int j;
	int count;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
				count++;
			j++;
		}
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*ans;
	int		bool_;

	i = 0;
	k = 0;
	if (!(ans = malloc(sizeof(char) * len_fin((char*)s1, (char*)set))))
		return (0);
	while (s1[i])
	{
		bool_ = 1;
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
				bool_ = 0;
			j++;
		}
		if (bool_ == 1)
			ans[k++] = s1[i];
		i++;
	}
	return (ans);
}
