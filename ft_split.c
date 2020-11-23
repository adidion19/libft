/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 09:31:34 by adidion           #+#    #+#             */
/*   Updated: 2020/11/23 17:46:40 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		in_string(char c, char c2)
{
	if (c == c2)
			return (1);
	return (0);
}

int		fft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		count_word(char *str, char charset)
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

char	**ft_split(char const *s, char c)
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
		tab[index] = (char*)malloc(sizeof(char) * (fft_strlen((char*)s) + 1));
		while (s[i] && in_string(((char*)s)[i], c))
			i++;
		while (s[i] && !in_string(((char*)s)[i], c))
			tab[index][j++] = s[i++];
		tab[index++][j] = '\0';
		j = 0;
	}
	tab[index] = 0;
	return (tab);
	free(tab);
}
