/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 10:20:33 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/13 19:41:26 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list_.h"

void		ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;
	t_list	*prev;
	t_list	*next;

	current = *begin_list;
	while (current)
	{
		next = current->next;
		if ((cmp)(current->data, data_ref) == 0)
		{
			if (current == *begin_list)
			{
				*begin_list = next;
			}
			else
				prev->next = next;
			free(current);
		}
		else
			prev = current;
		current = next;
	}
}
