/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 11:59:15 by gfragoso          #+#    #+#             */
/*   Updated: 2023/07/26 12:58:43 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_valid(char a, int start)
{
	if (a == '-' && start < 2)
		return (3);
	if (a == '+' && start < 2)
		return (4);
	if (a >= '0' && a <= '9')
		return (2);
	if ((a == ' ' || a == '\n' || a == '\t' 
			|| a == '\v' || a == '\f' || a == '\r') && start == 0)
		return (1);
	return (0);
}

int	ft_up_int(int *res, int add)
{
	(*res) = (*res) * 10 + add;
	return (2);
}

int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	val;
	int	signal;
	int	start;

	i = 0;
	res = 0;
	start = 0;
	signal = 1;
	while (str[i] != '\0')
	{
		val = ft_valid(str[i], start);
		if (val == 0)
			return (res * signal);
		if (val == 2)
			start = ft_up_int(&res, str[i] - 48);
		if (val == 3)
			signal *= -1;
		if (val >= 3)
			start = 1;
		i++;
	}
	return (res * signal);
}

/*#include <stdio.h>
#include <stdlib.h>
int main()
{
	char *a = "++123";
	printf("%d\n", ft_atoi(a));
	//printf("%d", atoi(a));
	return 0;
}*/