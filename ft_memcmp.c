/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 16:38:05 by adidion           #+#    #+#             */
/*   Updated: 2020/11/21 12:31:04 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int i;

	i = 0;
	while (((unsigned char*)s1)[i] &&
			(((unsigned char*)s1)[i] == ((unsigned char*)s1)[i]) && (int)n > i)
		i++;
	return (((unsigned char*)s1)[i] - ((unsigned char*)s2)[i]);
}
