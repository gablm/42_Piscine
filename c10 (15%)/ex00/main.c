/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:23:16 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/01 12:54:06 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

void	ft_read(int id)
{
	char	a[2];
	int		v;

	v = read(id, a, 1);
	while(v != 0)
	{
		write(1, a, 1);
		v = read(id, a, 1);
	}
}

int	main(int argc, char **argv)
{
	int	v;

	if (argc == 1)
		write(1, "File name missing.\n", 19);
	if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	if (argc != 2)
		return (0);
	v = open(argv[1], O_RDONLY);
	if (v == -1)
	{
		write(1, "Cannot read file.\n", 18);
		return (0);
	}
	ft_read(v);
	close(v);
	return (0);
}

