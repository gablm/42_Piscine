/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:35:32 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/08 16:42:02 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap_ptr(char **a, char **b)
{
	char	*temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
			if ((*cmp)(tab[j], tab[min]) < 0)
				min = j;
			j++;
		}
		if (min != i)
			ft_swap_ptr(&tab[min], &tab[i]);
		i++;
	}
}

/*#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0')
	{
		if (s2[i] == '\0' || s2[i] != s1[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (s2[i] != '\0')
		return (s1[i] - s2[i]);
	return (0);
}

int main(int argc, char **argv)
{
	(void)argc;
	ft_advanced_sort_string_tab(argv, &ft_strcmp);
	for(int i = 1; i < argc; i++)
		printf("%s\n", argv[i]);
	return 0;
}*/