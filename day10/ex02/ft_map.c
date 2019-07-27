/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 16:43:41 by hstark            #+#    #+#             */
/*   Updated: 2019/03/11 19:07:33 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int lenght, int (*f)(int))
{
	int *res;
	int i;

	res = (int *)malloc(sizeof(int) * (lenght - 1));
	i = 0;
	while (i < lenght)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}
