/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:16:56 by adidion           #+#    #+#             */
/*   Updated: 2020/11/26 13:28:33 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		is_in_set(char c, char *set)
{
	int i;
	int bool_;

	i = -1;
	bool_ = 0;
	while (set[++i])
	{
		if (c == set[i])
			bool_ = 1;
	}
	return (bool_);
}

static int		len_fin(char *str, char *set)
{
	int i;
	int count;
	int start;
	int end;

	i = 0;
	count = 0;
	while (1 == is_in_set(str[i], set))
		i++;
	start = i;
	while (str[i])
		i++;
	i--;
	while (1 == is_in_set(str[i], set))
		i--;
	i++;
	end = i;
	while (str[start++] && start <= end)
		count++;
	return (count);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		start;
	int		end;
	char	*ans;

	i = 0;
	j = 0;
	if (!set || !s1 ||
		!(ans = malloc(sizeof(char) * (len_fin((char*)s1, (char*)set) + 1))))
		return (0);
	while (1 == is_in_set(((char*)s1)[i], (char*)set))
		i++;
	start = i;
	while (s1[i])
		i++;
	i--;
	while (1 == is_in_set(((char*)s1)[i], (char*)set))
		i--;
	end = i;
	while (s1[start] && start <= end)
		ans[j++] = s1[start++];
	ans[j] = '\0';
	return (ans);
}
