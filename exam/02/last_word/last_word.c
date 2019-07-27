/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 00:14:00 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/17 00:14:00 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

void last_word(char *str)
{
	char *beg;
	int a = 0;

	while(*str && (*str == ' ' || *str == '\t'))
		str++;
	beg = str;
	while(*str)
	{
		if(*str == ' ' || *str == '\t')
			a = 1;
		if(a == 1 && *str != ' ' && *str != '\t')
		{
			a = 0;
			beg = str;
		}
		str++;
	}
	while(*beg && *beg != ' ' && *beg != '\t')
	{
		write(1, &(*beg), 1);
		beg++;
	}
} 
int main (int argc, char **argv)
{
	if(argc == 2)
		last_word(argv[1]);
	write(1, "\n", 1);
	return (0);

}