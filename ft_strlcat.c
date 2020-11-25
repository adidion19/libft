/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 11:58:48 by adidion           #+#    #+#             */
/*   Updated: 2020/11/25 13:12:05 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_len(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t len_src;
	size_t len_dest;

	len_dest = ft_len(dest);
	len_src = ft_len((char*)src);
	if (size <= len_dest)
		return (size + len_src);
	size -= len_dest;
	dest += len_dest;
	while (*src && size-- > 1)
		*dest++ = *src++;
	*dest = '\0';
	return (len_src + len_dest);
}
