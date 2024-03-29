/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 17:51:34 by adidion           #+#    #+#             */
/*   Updated: 2020/11/26 13:13:10 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (!little[i])
		return ((char*)big);
	if (len == 0)
		return (0);
	while (big[i] && len > i)
	{
		j = 0;
		while (big[i + j] == little[j] && len > i + j)
		{
			j++;
			if (!little[j])
				return (((char*)big) + i);
		}
		i++;
	}
	return (0);
}
