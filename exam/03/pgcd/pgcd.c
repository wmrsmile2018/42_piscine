/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 20:00:53 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/21 20:00:55 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

int pgcd(int a, int b)
{
	int c = (a > b) ? b : a;
	while(c > 0)
	{
		if(!(a % c) && !(b % c))
			return(c);
		c--;
	}
	return (1);
}
int main(int argc, char **argv)
{
	if(argc == 3)
	{
		printf("%d", pgcd(atoi(argv[1]), atoi(argv[2])));
	}
	printf("\n");
	return 0;
}