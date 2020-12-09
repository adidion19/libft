/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:09:20 by adidion           #+#    #+#             */
/*   Updated: 2020/12/09 10:30:31 by adidion          ###   ########.fr       */
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
	while (n > i)
	{
		if (str[i] == a)
			return (&str[i]);
		i++;
	}
	return (0);
}
