/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:12:57 by gfragoso          #+#    #+#             */
/*   Updated: 2023/07/24 15:56:39 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*#include <string.h>
#include <stdio.h>
int main()
{
	char *a = "39JJ09ARSD";
	char *b = "MAndo20fm3";
	int c = strcmp(a, b);
	int d = ft_strcmp(a, b);
	printf("%d\n %d", c, d);
}*/