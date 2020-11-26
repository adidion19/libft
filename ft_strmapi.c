/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 11:39:01 by adidion           #+#    #+#             */
/*   Updated: 2020/11/26 13:50:45 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				len;
	char			*ans;
	unsigned int	i;

	i = -1;
	len = 0;
	if (!(*f) || !s)
		return (0);
	while (s[++i])
		len++;
	if (!(ans = malloc(sizeof(char) * (len + 1))))
		return (0);
	i = 0;
	while (s[i])
	{
		ans[i] = f(i, s[i]);
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
