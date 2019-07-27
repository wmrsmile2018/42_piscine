/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/13 01:41:50 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/13 19:20:46 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list		*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*tmp;

	if (begin_list == NULL && nbr < 0)
		return (NULL);
	i = 0;
	tmp = begin_list;
	while (nbr-- > 0 && tmp->next)
		tmp = tmp->next;
	if (i == nbr)
		return (tmp);
	return (NULL);
}
