/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 14:37:58 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/13 18:38:29 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

t_list		*ft_create_elem(void *data)
{
	t_list	*i;

	i = (t_list*)malloc(sizeof(t_list));
	if (i == NULL)
		return (NULL);
	i->data = data;
	i->next = NULL;
	return (i);
}
