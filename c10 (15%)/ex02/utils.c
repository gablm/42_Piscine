/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 23:17:59 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/10 00:08:15 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tail.h"

void	ft_error(char *bname, char *name, char *error)
{
	ft_putstr(bname);
	ft_putstr(": cannot open \'");
	ft_putstr(name);
	ft_putstr("\' for reading: ");
	ft_putstr(error);
	ft_putstr("\n");
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_atoi(char *src)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	while ((src[i] >= 9 && src[i] <= 13) || src[i] == ' ')
		i++;
	if (src[i] == '-' || src[i] == '+')
		i++;
	while (src[i] >= '0' && src[i] <= '9')
	{
		res = res * 10 + (src[i] - '0');
		i++;
	}
	return (res);
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
