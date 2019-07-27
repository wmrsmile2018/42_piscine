/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/21 12:23:46 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/21 12:23:47 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
void my_print_char(char c)
{
	write(1, &c, 1);
}
void my_prinbr(unsigned long long nb)
{
	if(nb >= 10)
		my_prinbr(nb / 10);
	my_print_char(nb % 10 + 48);

}

int my_sqrt(int nb)
{
	int a = 0;
	int pow_a =a * a;

	while(pow_a < nb && a < 46340)
	{
		a++;
		pow_a = a * a;
	}
	return (a);
}

int my_atoi(char *nb)
{
	int sum = 0;

	while(*nb == '\n' || *nb == '\t' || *nb == '\v' || *nb == '\f' || *nb == ' ')
		nb++;
	if(*nb == '-')
		return (0);
	if(*nb == '+')
		nb++;
	while(*nb <= '9' && *nb >= '0')
	{
		if(sum != ((sum << 3) + (sum << 1) + *nb - '0') / 10)
			return(1);
		sum = ((sum << 3) + (sum << 1) + *nb++ - '0');
	}
	return(sum);
}

int is_prime(int nb)
{
	int i = 2;
	int s = my_sqrt(nb);
	if(nb == 2)
		return (nb);
	while(i <= s)
	{
		if(nb % i == 0)
			return (0);
		i++;
	}
	return (nb);

}
unsigned long long add_prime_sum(int nb)
{
	unsigned long long sum = 0;
	while(nb > 1)
		{
			sum += is_prime(nb);
			nb--;
		}
	return(sum);
}

int main(int argc, char **argv)
{
	int matoi;
	unsigned long long res;
	if(argc == 2)
	{
		if((matoi = my_atoi(argv[1])) == 0)
			return (1);
		res = add_prime_sum(matoi);
		my_prinbr(res);
	}
	write(1, "\n", 1);
	return (0);
}