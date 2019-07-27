/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 14:38:40 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/13 18:47:22 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void		ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*tmp;

	if (begin_list != NULL)
	{
		if (*begin_list == NULL)
			*begin_list = ft_create_elem(data);
		else
		{
			tmp = *begin_list;
			while (tmp->next != NULL)
				tmp = tmp->next;
			tmp->next = ft_create_elem(data);
		}
	}
}
