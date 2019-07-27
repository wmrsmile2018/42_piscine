/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 12:24:18 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/21 12:24:18 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

void epur_str (char *str)
{
	int a = 1;
	while(*str)
	{
		if(*str == ' ' && a)
		{
			write(1, str, 1);
			a = 0;
		}
		if(*str != ' ')
		{
			a = 1;
			write(1, str, 1);
		}
		str++;
	}

}

int main(int argc, char **argv)
{
	if(argc == 2)
		epur_str(argv[1]);
	write(1, "\n", 1);
	return(0);
}