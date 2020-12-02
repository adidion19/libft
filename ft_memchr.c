/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:09:20 by adidion           #+#    #+#             */
/*   Updated: 2020/11/30 10:24:55 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str2, int c, size_t n)
{
	unsigned char	a;
	size_t			i;
	unsigned char	*str;

	i = 0;
	a = (unsigned char)c;
	str = (unsigned char*)str2;
	while ((str[i] && n > i) || c == 0)
	{
		if (str[i] == a)
			return (&str[i]);
		i++;
	}
	return (0);
}
