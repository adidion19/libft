/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adidion <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/24 14:19:03 by adidion           #+#    #+#             */
/*   Updated: 2020/11/24 15:21:20 by adidion          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *temp;

	if (!new)
		return ;
	if (!*alst)
	{
		*alst = new;
		return ;
	}
	temp = ft_lstlast(*alst);
	temp->next = new;
	new->next = 0;
}
