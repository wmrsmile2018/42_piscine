/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 23:44:53 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/16 23:44:54 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void inter (char *str1, char *str2)
{
	char ascii[256] = {0};
	while(*str2)
		ascii[((int)*str2++)] = 1;
	while(*str1)
	{
		if(ascii[((int)*str1)] == 1)
		{
			write(1, &(*str1), 1);
			ascii[((int)*str1)] = 0;
		}
		str1++;
	}
}

int main (int argc, char **argv)
{
	if(argc == 3)
		inter(argv[1],argv[2]);
	write(1, "\n", 1);
	return (0);
}