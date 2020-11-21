/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 13:07:28 by adidion           #+#    #+#             */
/*   Updated: 2020/11/21 12:31:14 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int i;

	i = 0;
	if (!src)
		return (dest);
	while (n-- > 0)
	{
		((char*)dest)[i] = ((char *)src)[i];
		i++;
	}
	while (((char*)dest)[i])
		i++;
	((char*)dest)[i] = '\0';
	return (dest);
}
