/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/14 13:34:56 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/14 23:09:45 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	print_data(char *filename)
{
	int	des;
	int	mode;

	mode = O_RDONLY;
	des = 0;
	if ((des = open(filename, mode)) == -1)
	{
		write(1, "open() error\n", 13);
		return ;
	}
	else
		while (read(des, filename, 1) > 0)
			write(1, filename, 1);
	if (close(des) == -1)
		write(1, "close() error\n", 14);
}

int		main(int argc, char **argv)
{
	if (argc < 1)
		return (1);
	else if (argc == 1)
	{
		write(1, "File name missing.\n", 19);
		return (1);
	}
	else if (argc > 2)
	{
		write(1, "Too many arguments.\n", 20);
		return (1);
	}
	else if (argc == 2)
		print_data(argv[1]);
	return (0);
}
