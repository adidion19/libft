/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/18 11:28:34 by adidion           #+#    #+#             */
/*   Updated: 2020/11/26 12:56:24 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	int		i;
	char	*str;

	i = 0;
	str = ptr;
	while (n-- > 0)
		str[i++] = (char)c;
	return (ptr);
}
