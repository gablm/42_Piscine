/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:48:03 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/07 15:06:51 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int		*line_len(char *fname)
{
	int		f_id;
	char	a[2];

	f_id = open(fname, O_RDONLY);
	close(f_id);
}

t_map	build_map(char *fname)
{
	
}

void	print_map(t_map mapa, t_point start, int len)
{
	int	i;
	int j;

	i = 0;
	while (i < mapa.size)
	{
		j = 0;
		while(mapa.map[i][j])
		{
				if (i > start.y && i < start.y + len 
					&& j > start.x && j < start.y + len)
					write(1, &(mapa.symbs[2]) , 1);
				else
					write
		}
	}
}