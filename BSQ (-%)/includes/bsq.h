/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 12:45:26 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/07 13:04:03 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

typedef struct s_map
{
	char	**map;
	int		size;
	char	symbs[3];
}	t_map;

void	print_map(t_map map, t_point start, int len);
t_map	build_map(char *fname);
t_point	find_biggest_square(t_map map);
int		line_len(char *fname);

#endif
