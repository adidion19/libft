/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 09:14:01 by adidion           #+#    #+#             */
/*   Updated: 2020/11/24 10:39:38 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *s2;

	s2 = 0;
	if (*str == (char)c)
		s2 = (char *)str;
	while (*str)
	{
		if (*++str == (char)c)
			s2 = (char *)str;
	}
	return (s2);
}
