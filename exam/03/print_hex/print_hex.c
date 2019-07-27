/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 20:11:12 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/21 20:11:13 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int my_atoi(char *s)
{
	int res = 0;

	while(*s == ' ' || *s == '\t' || *s == '\f' || *s == '\v' || *s == '\r' || *s == '\r')
		s++;
	if(*s == '-')
		return (0);
	if(*s == '+')
		s++;
	while(*s <= '9' && *s >= '0')
	{
		if(res != ((res << 3) + (res << 1) + *s - '0') / 10)
			return (0);
		res = (res << 3) + (res << 1) + *s++ - '0';
	}
	return (res);
}

void print_hex (int n)
{
	if(n == 0)
		return ;
	if (n >= 16)
		print_hex(n / 16);
	n %= 16;
	n += (n < 10) ? '0' : 'a' - 10;
	write(1, &n, 1);
}
int main(int argc, char **argv)
{
	if(argc == 2)
		print_hex(my_atoi(argv[1]));
	write(1, "\n", 1);
	return 0;
}