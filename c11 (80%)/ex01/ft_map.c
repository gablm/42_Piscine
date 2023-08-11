/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:42:39 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/08 15:03:03 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*res;

	res = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		res[i] = (*f)(tab[i]);
		i++;
	}
	return (res);
}

/*#include <stdio.h>
int show(int a)
{ 
	return a + 1;
}

int main()
{
	int tab[] = {1, 2};
	int *b = ft_map(tab, 2, &show);
	printf("%d, %d", b[0], b[1]);
}*/