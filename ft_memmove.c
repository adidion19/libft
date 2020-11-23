/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:15:45 by adidion           #+#    #+#             */
/*   Updated: 2020/11/23 10:25:29 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *d, const void *s, size_t n)
{
	unsigned char *src;
	unsigned char *dest;

	if (!d && !s)
		return(0);
	src = (unsigned char*)s;
    dest = (unsigned char*)d;
	if (((char*)d - (char*)s) > 0) 
	{
		dest = dest + n;
		while (dest != d && n)
		{
			dest--;
			*dest = *(dest - ((char*)d - (char*)s));
		}
	}
	if (((char*)d - (char*)s) < 0)
		while (n)
		{
			*dest = *(dest - ((char*)d - (char*)src));
			dest++;
			n--;
		}
	return (dest);
}
