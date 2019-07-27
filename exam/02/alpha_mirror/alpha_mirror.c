/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 15:45:01 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/17 15:45:02 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void alpha_mirror (char *str)
{
	while(*str)
	{
		if(*str >= 'a' && *str <= 'z')
			*str = 'm' - (*str - 'n');
		else if(*str >= 'a' && *str <= 'Z')
			*str = 'M' - (*str - 'N');
		write(1, &(*str), 1);
		str++;
	}
	write(1, "\n", 1);
}
int main(int argc, char **argv)
{
	if(argc == 2)
		alpha_mirror(argv[1]);
	return 0;
}