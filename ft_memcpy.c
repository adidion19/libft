/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 13:07:28 by adidion           #+#    #+#             */
/*   Updated: 2020/11/24 10:30:45 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;

	i = -1;
	if (!dest && !src)
		return (0);
	while (n-- > 0)
	{
		++i;
		((char*)dest)[i] = ((char *)src)[i];
	}
	return ((void*)dest);
}
