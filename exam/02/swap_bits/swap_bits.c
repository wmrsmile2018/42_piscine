/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/17 00:56:22 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/17 00:56:23 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
unsigned char	swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}
int main (int argc, char **argv)
{
	printf("%d\n", swap_bits(251));
	return (0);
}
