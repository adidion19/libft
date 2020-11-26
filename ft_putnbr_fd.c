/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 13:30:22 by adidion           #+#    #+#             */
/*   Updated: 2020/11/26 13:55:21 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void		ft_putnbr_fd(int nb, int fd)
{
	unsigned int a;

	if (nb < 0)
	{
		write(fd, "-", 1);
		a = -nb;
	}
	else
		a = nb;
	if (a >= 10)
	{
		ft_putnbr_fd(a / 10, fd);
		ft_putchar(a % 10 + '0', fd);
	}
	else
		ft_putchar(a + '0', fd);
}
