/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 01:58:33 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/13 19:35:51 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_reverse(t_list **begin_list)
{
	t_list	*cur;
	t_list	*addr;

	cur = *begin_list;
	addr = NULL;
	while (cur)
	{
		cur = cur->next;
		(*begin_list)->next = addr;
		addr = *begin_list;
		*begin_list = cur;
	}
	*begin_list = addr;
}
