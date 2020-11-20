/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 09:31:34 by adidion           #+#    #+#             */
/*   Updated: 2020/11/20 09:35:16 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		in_string(char c, char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		count_word(char *str, char *charset)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (in_string(str[i], charset))
			i++;
		if (!(in_string(str[i], charset)) && str[i] != 0)
		{
			while (!(in_string(str[i], charset)) && str[i])
				i++;
			count++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char *c)
{
	int		i;
	int		j;
	int		index;
	char	**tab;

	i = 0;
	j = 0;
	index = 0;
	tab = 0;
	tab = (char**)malloc(sizeof(char*) * (count_word((char*)s, c) + 1));
	if (!tab)
		return (0);
	while (index < count_word((char*)s, c))
	{
		tab[index] = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
		while (str[i] && in_string(((char*)s)[i], c))
			i++;
		while (str[i] && !in_string(((char*)s)[i], c))
			tab[index][j++] = s[i++];
		tab[index][j] = '\0';
		j = 0;
		index++;
	}
	tab[index] = 0;
	return (tab);
}
