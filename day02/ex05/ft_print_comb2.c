/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 05:39:34 by bannabel          #+#    #+#             */
/*   Updated: 2019/02/28 20:52:39 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print(int value)
{
	ft_putchar(value / 10 + '0');
	ft_putchar(value % 10 + '0');
}

void	print_out(int first, int second)
{
	ft_print(first);
	ft_putchar(' ');
	ft_print(second);
	if (first == 98 && second == 99)
	{
		ft_putchar('\n');
	}
	else
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int first;
	int second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			print_out(first, second);
			second++;
		}
		first++;
	}
}
