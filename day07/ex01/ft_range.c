/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 11:49:35 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/07 22:41:47 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*temp;
	int		i;

	if (min >= max)
		return (NULL);
	temp = (int*)malloc(sizeof(int) * (max - min));
	if (temp == 0)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		temp[i] = min + i;
		i++;
	}
	return (temp);
}
int main()
{
	int *hello = ft_range(2, 3);
	return (0);
}