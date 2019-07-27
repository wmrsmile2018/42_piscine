/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/27 20:14:05 by bannabel          #+#    #+#             */
/*   Updated: 2019/04/01 16:28:53 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		ft_putchar(char c)
{
	write(1, &c, 1);
	return 0;
}

void	ft_print_numbers(void)
{
	char letter;

	letter = '0' - 1;
	while (++letter <= '9')
		ft_putchar(letter);
}
int main ()
{
	ft_print_numbers();
}


