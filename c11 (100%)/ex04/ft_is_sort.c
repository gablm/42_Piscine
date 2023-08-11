/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:24:19 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/08 15:34:15 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;

	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int sort(int a, int b)
{ 
	return a > b;
}

int main()
{
	int tab[] = {1, 2, 5, 20, 5};
	printf("%d", ft_is_sort(tab, 5, &sort));
}*/