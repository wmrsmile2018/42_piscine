/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 00:48:10 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/05 22:20:24 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int	i;
	int	res;
	int	negative;

	i = 0;
	res = 0;
	negative = 1;
	while (*str != '\0' && (*str == ' ' || *str == '\t' || *str == '\n'
				|| *str == '\v' || *str == '\f' || *str == '\r'))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			negative = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		if (res != ((res << 3) + (res << 1) + (*str - '0')) / 10)
			return (negative < 0 ? 0 : -1);
		res = (res << 3) + (res << 1) + (*str++ - '0');
	}
	return ((int)res * negative);
}
