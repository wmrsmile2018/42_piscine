/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 04:30:15 by bannabel          #+#    #+#             */
/*   Updated: 2019/02/28 20:29:52 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

in		ft_putchar(char c);

void	ft_print(int first, int second, int third)
{
	ft_putchar(first);
	ft_putchar(second);
	ft_putchar(third);
	if (!(first == '7' && second == '8' && third == '9'))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int first;
	int second;
	int third;

	first = '0';
	while (first <= '7')
	{
		second = first + 1;
		while (second <= '8')
		{
			third = second + 1;
			while (third <= '9')
			{
				ft_print(first, second, third);
				third++;
			}
			second++;
		}
		first++;
	}
	ft_putchar('\n');
}
