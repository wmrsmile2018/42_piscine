/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hstark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/16 22:56:49 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/21 14:02:54 by hstark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int res = 0;
	int neg = 1;

	while(*str && ( *str == ' ' || *str == '\t' || *str == '\f' || *str == '\v' ||  *str == '\r' || *str == '\n'))
		str++;
	if(*str == '+' || *str == '-')
	{
		if(*str == '-')
			neg = -1;
		str++;
	}
	while(*str <= '9' && *str >= '0')
	{
		if(res != ((res << 3) + (res << 1) + (*str - '0')) / 10)
				return (neg == 1 ? -1 : 0 );
		res = (res << 3) + (res << 1) + *str++ - '0';
	}
	return ((int) res * neg);
}
