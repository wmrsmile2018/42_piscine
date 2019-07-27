/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 15:12:06 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/21 15:12:07 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	int len = 0;
	if(!begin_list)
		return	(0);
	while(begin_list)
	{
		len++;
		begin_list = begin_list->next;
	}
	return (len);
}

int main()
{
	t_list *t1 = (t_list*)malloc(sizeof(t_list));
	t_list *t2 = (t_list*)malloc(sizeof(t_list));
	t_list *t3 = (t_list*)malloc(sizeof(t_list));
	t_list *t4 = (t_list*)malloc(sizeof(t_list));
	t_list *t5 = (t_list*)malloc(sizeof(t_list));
	t_list *t6 = (t_list*)malloc(sizeof(t_list));

	t6->next = NULL;
	t6->data = "6";
	t5->data = "5";
	t5->next = t6;
	t4->data = "4";
	t4->next = t5;
	t3->data = "3";
	t3->next = t4;
	t2->data = "2";
	t2->next = t3;
	t1->data = "1";
	t1->next = t2;

	printf("%d\n", ft_list_size(t1));
	return 0;
}
