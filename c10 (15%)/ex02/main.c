/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 10:48:50 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/10 00:30:49 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tail.h"

int	ft_size(char **id, int pos)
{
	char	a[2];
	int		res;
	int		v;

	v = open(id[pos], O_RDONLY);
	res = 0;
	while (read(v, a, 1) > 0)
		res++;
	if (read(v, a, 1) < 0)
	{
		ft_error(basename(id[0]), id[pos], strerror(errno));
		return (-1);
	}
	close(res);
	return (res);
}

void	ft_write(char *id, int total, int bytes)
{
	char	*a;
	int		i;
	int		v;

	if (total < 0)
		return ;
	v = open(id, O_RDONLY);
	i = total - bytes;
	if (total >= bytes)
	{
		a = (char *)malloc(sizeof(char) * i);
		read(v, a, i);
		free(a);
	}
	else
		bytes = total;
	a = (char *)malloc(sizeof(char) * bytes);
	read(v, a, bytes);
	write(1, a, bytes);
	free(a);
	close(v);
}

int	main(int argc, char **argv)
{
	int	i;
	int	bytes;
	int	size;

	if (argc < 4)
		return (0);
	bytes = ft_atoi(argv[2]);
	i = 3;
	while (i < argc)
	{
		size = ft_size(argv, i);
		if (argc > 4 && size > 0)
		{
			if (i != 3)
				write(1, "\n", 1);
			write(1, "==> ", 4);
			ft_putstr(argv[i]);
			write(1, " <==\n", 5);
		}
		ft_write(argv[i], size, bytes);
		i++;
	}
	return (0);
}
