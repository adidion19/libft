/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:58:48 by adidion           #+#    #+#             */
/*   Updated: 2020/11/19 16:59:41 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t len_src;
	size_t len_dest;

	len_dest = 0;
	len_src = len((char*)src);
	while (*dest && size > 0)
	{
		dest++;
		len_dest++;
		size--;
	}
	while (*src && size-- > 1)
		*dest++ = *src++;
	if (size == 1 || *src == 0)
		*dest = '\0';
	return (len_src + len_dest);
}
