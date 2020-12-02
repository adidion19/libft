/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 10:37:01 by adidion           #+#    #+#             */
/*   Updated: 2020/11/30 10:54:08 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*mem;

	if (n == 0 || size == 0)
	{
		n = 1;
		size = 1;
	}
	if (!(mem = malloc(size * n)))
		return (0);
	if (mem)
		ft_bzero(mem, n * size);
	return (mem);
}
