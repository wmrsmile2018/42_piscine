/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 13:36:23 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/07 22:43:16 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;

	if (max <= min)
		return (0);
	i = 0;
	*range = (int*)malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (0);
	while (i < max - min)
	{
		(*range)[i] = min + i;
		i++;
	}
	return (max - min);
}
int main()
{
	int *p;
	ft_ultimate_range(&p, 20, 30);

}