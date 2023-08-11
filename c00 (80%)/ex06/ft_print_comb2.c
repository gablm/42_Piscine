/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:26:34 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/11 21:57:23 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_num(int x)
{
	char	c;

	if (x < 10)
	{
		c = '0' + x;
		write(1, "0", 1);
		write(1, &c, 1);
		return ;
	}
	c = '0' + (x / 10);
	write(1, &c, 1);
	c = '0' + (x % 10);
	write(1, &c, 1);
}

void	ft_print(int x, int y)
{
	ft_print_num(x);
	write(1, " ", 2);
	ft_print_num(y);
	if (x != 98 || y != 99)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print(a, b);
			b++;
		}
		a++;
	}
}
/*
int main(){
    ft_print_comb2();
}*/
