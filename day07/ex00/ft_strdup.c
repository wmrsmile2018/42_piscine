/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 00:29:01 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/07 22:42:10 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*temp;
	int		len;

	len = 0;
	while (src[len] != '\0')
		len++;
	temp = (char*)malloc(sizeof(char) * len);
	if (temp == NULL)
		return (NULL);0
	temp[len] = '\0';
	while (len > 0)
	{
		temp[len - 1] = src[len - 1];
		len--;
	}
	return (temp);
}
