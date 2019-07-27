/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 00:32:03 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/17 00:32:05 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char print = 1;
	unsigned char res = 0;

	while(print < 128)
	{
		if(print & octet)
			res += 1;
		res <<= 1;
		print <<= 1;
	}	
	return (res);
}

int main(int argc, char **argv)
{
	char c = reverse_bits(2);
	printf("%d\n", c);
	return (0);
}