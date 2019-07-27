/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 19:17:33 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/21 19:17:34 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int hidenp (char **str)
{
	while(*str[1] && *str[2])
	{
		if(*str[1] == *str[2])
			str[1]++;
		str[2]++;
	}
	if(*str[1])
		return (0);
	return(1);
	
}

int main(int argc, char **argv)
{
	char c;
	if(argc == 3)
	{
		c = hidenp(argv) + 48;
		write(1, &c, 1);
	}
	write(1, "\n", 1);
	return (0);
}