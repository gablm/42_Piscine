/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:13:44 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/08 15:24:02 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while (i < length)
	{
		if ((*f)(tab[i]) != 0)
			res++;
		i++;
	}
	return (res);
}

/*#include <stdio.h>
int start_a(char *a)
{ 
	return a[0] == 'a';
}

int main()
{
	char *tab[] = {"ba", "aa", "cdde", "adawda"};
	printf("%d", ft_count_if(tab, 4, &start_a));
}*/