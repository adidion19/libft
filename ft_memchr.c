/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:09:20 by adidion           #+#    #+#             */
/*   Updated: 2020/11/21 12:30:51 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *str, int c, size_t n)
{
	int i;

	i = 0;
	while (((char*)str)[i] && n > 0)
	{
		if (((char*)str)[i] == (char)c)
			return ((void*)str);
		str++;
	}
	return ((void*)str);
}
