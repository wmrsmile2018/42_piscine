/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <hstark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 16:21:31 by hstark            #+#    #+#             */
/*   Updated: 2019/03/11 16:40:01 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef void(*fptr)(int);

#include <stdio.h>
void hello (int a)
{
	printf("%d\n", a);
}


void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int i;

	i = 0;
	while (i < length)
	{
		f(tab[i++]);
	}
}

int main()
{
	//void(*a)(int) = &hello;
	fptr a = &hello;
	int p[] = {2,4,5,6,1};
	ft_foreach(p, 5, a);
}

