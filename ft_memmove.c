/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:15:45 by adidion           #+#    #+#             */
/*   Updated: 2020/11/21 18:16:55 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*int		len(unsigned char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}*/

void	*ft_memmove(void *d, const void *s, size_t n)
{
	char *src;
	char *dest;
	unsigned char temp[n];
	size_t i;

	src = (char*)s;
	dest = (char*)d;
	i = -1;
	if (n == 0 || (src == 0 && dest == 0))
		return (dest);
	while (++i < n)
		temp[i] = ((unsigned char*)src)[i];
	i = -1;
	while (++i < n)
		((unsigned char*)dest)[i] = temp[i];
	return (dest);
}
