/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 17:33:28 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/21 13:38:41 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void wdmatch (char **str)
{
	char *tmp = str[1];
	while(*str[1] && *str[2])
	{
		if(*str[1] == *str[2])
			str[1]++;
		str[2]++;
	}
	if(!(*str[1]))
		while(*tmp)
			write(1, tmp++, 1);
}

int main(int argc, char **argv)
{
	if(argc == 3)
		wdmatch(argv);
	write(1, "\n", 1);
	return 0;

}