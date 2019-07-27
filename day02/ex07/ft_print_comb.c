/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/28 09:14:57 by bannabel          #+#    #+#             */
/*   Updated: 2019/02/28 21:11:55 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print(char *array, int n, char flag)
{
	int i;

	i = 0;
	while (i < n)
	{
		ft_putchar(array[i]);
		i++;
	}
	if (flag)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	fill(char *array, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		array[i] = 48 + i;
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	array[n];
	int		cur;

	fill(array, n);
	cur = n - 1;
	while (array[0] != '9' - n + 1)
	{
		print(array, n, 1);
		while (cur >= 0)
		{
			if (array[cur] < '9' - n + 1 + cur)
			{
				array[cur] += 1;
				while (cur < n - 1)
				{
					cur++;
					array[cur] = array[cur - 1] + 1;
				}
				break ;
			}
			cur--;
		}
	}
	print(array, n, 0);
}
