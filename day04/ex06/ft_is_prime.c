/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 18:17:48 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/02 22:17:42 by hstark           ###   ########.fr       */
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

int		ft_is_prime(int nb)
{
	int i;
	int s;

	s = ft_sqrt(nb);
	i = 2;
	if (nb < 2)
		return (0);
	while (i <= s)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
