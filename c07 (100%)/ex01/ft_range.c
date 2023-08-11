/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:03:21 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/02 16:27:06 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*new;
	int	i;

	if (min >= max)
		return ((void *)0);
	new = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	while (min < max)
	{
		new[i++] = min;
		min++;
	}
	return (new);
}

/*#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv){
	if (argc != 3) return (0);
	int *a = ft_range(atoi(argv[1]), atoi(argv[2]));
	printf("%p\n", a);
	for(int i = 0; i < atoi(argv[2]) - atoi(argv[1]); i++)
		printf("%d ", a[i]);
	free(a);
}*/