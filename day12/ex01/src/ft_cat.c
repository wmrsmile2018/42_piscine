/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 20:37:21 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/14 23:25:29 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <errno.h>
#include <fcntl.h>
#include <unistd.h>

void	ft_putstr(int des_file, const char *error)
{
	while (*error)
		write(des_file, &(*error++), 1);
}

void	loop(void)
{
	char symb;

	while (read(1, &symb, 1))
		write(1, &symb, 1);
}

void	print_error(char *argv, const char *sys_errlist[])
{
	ft_putstr(2, "cat: ");
	ft_putstr(2, argv);
	ft_putstr(2, ": ");
	ft_putstr(2, sys_errlist[errno]);
	write(2, "\n", 1);
}

void	action(char *argv)
{
	extern const char	*sys_errlist[];
	int					des_o;
	int					i;
	int					mode;
	int					des_r;

	i = 1;
	mode = O_RDONLY;
	if (argv[0] == '-')
	{
		loop();
		return ;
	}
	if ((des_o = open(argv, mode)) == -1)
	{
		print_error(argv, sys_errlist);
		return ;
	}
	while ((des_r = read(des_o, argv, 1)) > 0)
		write(1, argv, 1);
	if (des_r < 0)
		print_error(argv, sys_errlist);
	close(des_o);
}

int		main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc < 1)
		return (1);
	if (argc == 1)
		loop();
	else
		while (i < argc)
			action(argv[i++]);
	return (0);
}
