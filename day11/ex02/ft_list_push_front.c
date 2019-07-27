/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 14:39:58 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/13 18:48:42 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*tmp;

	if (begin_list)
	{
		if (!(*begin_list))
			*begin_list = ft_create_elem(data);
		else
		{
			tmp = ft_create_elem(data);
			tmp->next = *begin_list;
			*begin_list = tmp;
		}
	}
}
