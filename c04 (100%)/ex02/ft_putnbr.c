/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 11:57:38 by gfragoso          #+#    #+#             */
/*   Updated: 2023/07/26 11:34:09 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	if (nbr == -2147483648)
	{
		ft_putnbr(-2);
		ft_putnbr(147483648);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nbr);
		return ;
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
		return ;
	}
	ft_putchar('0' + nbr);
}

/*
int main(){
	ft_putnbr(13);
	write(1, &"\n", 1);
	ft_putnbr(-100);
	write(1, &"\n", 1);
}*/
