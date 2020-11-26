/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:15:45 by adidion           #+#    #+#             */
/*   Updated: 2020/11/26 12:58:27 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	unsigned char *src;
	unsigned char *dest;

	if (!d && !s)
		return (0);
	src = (unsigned char*)s;
	dest = (unsigned char*)d;
	if (src < dest && src + n > dest)
		while (n--)
			dest[n] = src[n];
	else
		ft_memcpy(dest, src, n);
	return (d);
}
