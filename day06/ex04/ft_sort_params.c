/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bannabel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 22:09:51 by bannabel          #+#    #+#             */
/*   Updated: 2019/03/06 22:56:54 by bannabel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1++ == *s2++)
		if (*s1 == '\0' && *s2 == '\0')
			return (0);
	return (*--s1 - *--s2);
}

void	ft_sort_params(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	char	*c;

	i = 2;
	argc = 1;
	while (argv[argc])
	{
		while (argv[i])
		{
			if (ft_strcmp(argv[argc], argv[i]) > 0)
			{
				c = argv[argc];
				argv[argc] = argv[i];
				argv[i] = c;
			}
			i++;
		}
		ft_sort_params(argv[argc]);
		ft_putchar('\n');
		argc++;
		i = argc + 1;
	}
	return (0);
}
