/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 19:13:17 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/02 16:27:19 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	h;
	int	*res;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	res = (int *)malloc(sizeof(int) * (max - min));
	i = 0;
	if (res == NULL)
		return (-1);
	h = min;
	while (h < max)
	{
		res[i++] = h;
		h++;
	}
	*range = res;
	return (max - min);
}

/*#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv){
	if (argc != 3) return (0);
	int **a = (int **)malloc(sizeof(int *));
	int b = ft_ultimate_range(a, atoi(argv[1]), atoi(argv[2]));
	printf("t: %d\n\n", b);
	for(int i = 0; i < atoi(argv[2]) - atoi(argv[1]); i++)
		printf("%d ", a[0][i]);
	free(a[0]);
	free(a);
}*/