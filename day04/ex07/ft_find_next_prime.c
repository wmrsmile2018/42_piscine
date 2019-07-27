/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 18:35:58 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/02 22:16:48 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;
	int i2;

	i = 1;
	i2 = i * i;
	while (i2 < nb && i < 46340)
	{
		i++;
		i2 = i * i;
	}
	return (i);
}

int		ft_find_next_prime(int nb)
{
	int next;
	int i;

	if (nb <= 2)
		return (2);
	next = nb;
	i = 2;
	while (i <= ft_sqrt(next))
	{
		if (next % i == 0)
		{
			next++;
			i = 2;
		}
		else
			i++;
	}
	return (next);
}
