/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 14:42:39 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/08 14:54:53 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		(*f)(tab[i]);
		i++;
	}
}

/*#include <stdio.h>
void show(int a)
{ 
	printf("%d\n", a);
}

int main()
{
	int tab[] = {1, 2};
	ft_foreach(tab, 2, &show);
}*/