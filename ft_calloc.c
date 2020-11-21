/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 10:37:01 by adidion           #+#    #+#             */
/*   Updated: 2020/11/21 13:19:54 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	int *mem;
	int i;

	i = 0;
	if (n <= 0 || size <= 0)
		return (0);
	mem = malloc(size * n);
	while (mem[i++])
		mem = 0;
	return ((void*)mem);
}
