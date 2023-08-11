/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:32:59 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/08 16:41:47 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_ptr(char **a, char **b)
{
	char	*temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s2[i] == '\0')
			return (1);
		if (s2[i] > s1[i])
			return (-1);
		if (s1[i] > s2[i])
			return (1);
		i++;
	}
	if (s2[i] != '\0')
		return (-1);
	return (0);
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j; 
	int	min;
	int	size;

	i = 0;
	size = 0;
	while (tab[size] != 0)
		size++;
	while (i < size - 1)
	{
		min = i;
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[j], tab[min]) < 0)
				min = j;
			j++;
		}
		if (min != i)
			ft_swap_ptr(&tab[min], &tab[i]);
		i++;
	}
}

/*#include <stdio.h>
int main(int argc, char **argv)
{
	(void)argc;
	ft_sort_string_tab(argv);
	for(int i = 1; i < argc; i++)
		printf("%s\n", argv[i]);
	return 0;
}*/