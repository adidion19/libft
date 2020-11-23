/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 10:37:01 by adidion           #+#    #+#             */
/*   Updated: 2020/11/23 13:00:40 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	int *mem;
	int i;

	i = -1;
	if (!(mem = malloc(size * n)))
		return (0);
	while (mem[++i])
		mem[i] = 0;
	return ((void*)mem);
}
