/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:23:16 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/09 23:14:52 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <libgen.h>
#include <errno.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_error(char *bname, char *name, char *error)
{
	ft_putstr(bname);
	ft_putstr(": ");
	ft_putstr(name);
	ft_putstr(": ");
	ft_putstr(error);
	ft_putstr("\n");
}

void	ft_read(int id, char *bname, char *name)
{
	char	a[2];
	int		v;

	v = read(id, a, 1);
	while (v != 0)
	{
		if (v == -1)
		{
			ft_error(bname, name, strerror(errno));
			return ;
		}
		write(1, a, 1);
		v = read(id, a, 1);
	}
}

int	main(int argc, char **argv)
{
	int	v;
	int	i;

	if (argc < 2)
	{
		ft_read(0, basename(argv[0]), "bash");
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		v = open(argv[i], O_RDONLY);
		if (v == -1)
			ft_error(basename(argv[0]), argv[i], strerror(errno));
		else
			ft_read(v, basename(argv[0]), argv[i]);
		close(v);
		i++;
	}
	return (0);
}
