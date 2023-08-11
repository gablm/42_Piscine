/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 11:59:15 by gfragoso          #+#    #+#             */
/*   Updated: 2023/07/26 16:26:39 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	ft_valid_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ' 
			|| base[i] == 127 || base[i] <= 32)
			return (0);
		if (ft_countchar(base, base[i]) != 1)
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	res;
	int	signal;

	i = 0;
	res = 0;
	signal = 1;
	if (ft_valid_base(base) == 0)
		return (0);
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

/*#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
	(void)argc;
	printf("%d\n", ft_atoi_base(argv[1], argv[2]));
	//printf("%d", atoi(a));
	return 0;
}*/
