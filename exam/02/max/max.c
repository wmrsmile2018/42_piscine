/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 17:12:25 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/17 17:12:26 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int max (int *tab, unsigned int len)
{
	unsigned int i = -1;
	int max;
	if(!tab)
		return 0;
	if(len == 0)
		return 0;
	max = tab[0];
	while(++i < len)
		if(max < tab[i])
			max = tab[i];
	return(max);
}

int main()
{
	int tab[10] = {};
	printf("%d\n",max(tab,10));	
	return 0;
}