/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/02 18:54:01 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/02 18:55:49 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (1);
	else if (nb == 1 || nb == 0)
		return (1);
	else
		nb = ft_recursive_factorial(nb - 1) * nb;
	return (nb);
}
