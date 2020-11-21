/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 13:31:05 by adidion           #+#    #+#             */
/*   Updated: 2020/11/21 12:30:39 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	int i;

	i = 0;
	while (((char*)src)[i] != (char)c && n-- > 0)
	{
		((char*)dest)[i] = ((char*)src)[i];
		i++;
	}
	while (((char*)dest)[i])
		i++;
	((char*)dest)[i] = '\0';
	return (dest);
}