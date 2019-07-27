/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 14:13:34 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/07 22:47:07 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		my_strlen(int argc, char **argv)
{
	int i;
	int j;
	int len;

	i = 1;
	j = 0;
	len = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*temp;
	int		i;
	int		j;
	int		t;

	temp = (char*)malloc(sizeof(char) * my_strlen(argc, argv));
	i = 1;
	t = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			temp[t] = argv[i][j];
			t++;
			j++;
		}
		if ((i + 1) < argc)
			temp[t] = '\n';
		t++;
		i++;
	}
	temp[t - 1] = '\0';
	return (temp);
}

int main(int argc, char **argv)
{
	char *hello;
	hello = ft_concat_params(argc, argv);
	printf("%s\n", hello);
	return 0;
}