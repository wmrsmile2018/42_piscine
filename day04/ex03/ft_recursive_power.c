/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 01:33:14 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/02 22:17:23 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int res;

	res = nb;
	if (power != 0)
	{
		power--;
		res *= ft_recursive_power(nb, power);
		return (res);
	}
	else
	{
		return (1);
	}
	return (res);
}
