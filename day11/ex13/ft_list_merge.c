/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 15:16:06 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/13 19:44:10 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*p;

	p = *begin_list1;
	if (begin_list1)
	{
		if (*begin_list1 == NULL)
			*begin_list1 = begin_list2;
		else
		{
			while (p->next != NULL)
				p = p->next;
			p->next = begin_list2;
		}
	}
}
