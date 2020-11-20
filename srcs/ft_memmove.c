/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 15:15:45 by adidion           #+#    #+#             */
/*   Updated: 2020/11/18 16:31:00 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		len(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	temp[len((char*)src)];
	int		i;

	i = 0;
	while (i < n)
	{
		temp[i] = ((char*)src)[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		((char*)dest)[i] = temp[i];
		i++;
	}
	return (dest);
}
