/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 09:31:34 by adidion           #+#    #+#             */
/*   Updated: 2020/12/04 13:13:31 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		in_string(char c, char c2)
{
	if (c == c2)
		return (1);
	return (0);
}

static int		fft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

static int		count_word(char *str, char charset)
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

static char		**free_tab(char **tab, int j)
{
	int i;

	i = 0;
	while (i < j && tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (0);
}

char			**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		index;
	char	**tab;

	i = 0;
	j = 0;
	index = 0;
	tab = 0;
	if (!s || !(tab = malloc(sizeof(*tab) * (count_word((char*)s, c) + 1))))
		return (0);
	while (index < count_word((char*)s, c))
	{
		if (!(tab[index] = malloc(sizeof(char) * (fft_strlen((char*)s) + 1))))
			return (free_tab(tab, i));
		while (s[i] && in_string(((char*)s)[i], c))
			i++;
		while (s[i] && !in_string(((char*)s)[i], c))
			tab[index][j++] = s[i++];
		tab[index++][j] = '\0';
		j = 0;
	}
	tab[index] = 0;
	return (tab);
}
