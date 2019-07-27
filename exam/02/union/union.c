/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 01:05:30 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/17 01:08:07 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>


void my_union (char **str)
{
	char ascii[256] = {0};
	int j = 0;
	while(str[1][j])
	{
		if(ascii[((int)str[1][j])] == 0)
		{
			write(1, &(str[1][j]), 1);
			ascii[((int)str[1][j])] = 1;
		}
		j++;
	}
	j = 0;
	while(str[2][j])
	{
		if(ascii[(int)str[2][j]] == 0)
		{
			write(1, &(str[2][j]), 1);
			ascii[((int)str[2][j])] = 1;
		}
		j++;
	}
}

int main(int argc, char **argv)
{
	if(argc == 3)
		my_union(argv);
	return 0;

}