/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 12:25:29 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/21 12:25:31 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int     *ft_rrange(int start, int end)
{
	int len = (end - start) > 0 ? end - start +1 : start - end +1;
    int * res = (int*)malloc(sizeof(int) * len);
    while(len--)
    {
    	if(start <= end)
    		res[len] = start++;
    	else	
    		res[len] = start--;
    }
    return (res);
}
int main()
{
	int end = -3;
	int start = 0;
	int len = (end - start) > 0 ? end - start +1 : start - end +1;
	int *a = ft_rrange(start,end);
	int i = 0;
	while(i < len)
		printf("%d\n", a[i++]);

	return 0;
}
