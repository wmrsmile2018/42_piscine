/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 23:16:21 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/16 23:16:23 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>
char    *ft_strdup(char *src)
{
	int len = 0;
	char *str; 

	if(!src)
		return (NULL);
	while (src[len++]);
	str = (char*)malloc(sizeof(char) * (len + 1));
	str[len + 1] = '\0';
	while (len-- > 0)
		str[len-1] = src[len-1];

	return (str);
}

int main (int argc, char **argv)
{
	if(argc == 2)
		printf("%s\n", ft_strdup(argv[1]));
	return (0);

}