/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 11:04:19 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/02 15:41:36 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_countchar(char *str, char to_find)
{
	int	i;
	int	h;

	i = 0;
	h = 0;
	while (str[i] != '\0')
	{
		if (str[i] == to_find)
			h++;
		i++;
	}
	return (h);
}

int	is_base(char a, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == a)
			return (1);
		i++;
	}
	return (0);
}

void	ft_up_int(int *res, char add, char *base)
{
	int	i;
	int	h;

	i = 0;
	h = 0;
	while (base[i])
		i++;
	while (base[h])
	{
		if (base[h] == add)
			break ;
		h++;
	}
	(*res) = (*res) * i + h;
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	res;
	int	signal;

	i = 0;
	res = 0;
	signal = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (str[i])
	{
		if (is_base(str[i], base) == 0)
			break ;
		ft_up_int(&res, str[i], base);
		i++;
	}
	return (res * signal);
}
