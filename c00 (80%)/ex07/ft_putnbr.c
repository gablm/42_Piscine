/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:28:52 by gfragoso          #+#    #+#             */
/*   Updated: 2023/07/23 11:29:53 by gfragoso         ###   ########.fr       */
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

/*int main(){
	ft_putnbr(-2147483648);
	write(1, &"\n", 1);
	ft_putnbr(-2147483647);
	write(1, &"\n", 1);
	ft_putnbr(42);
	write(1, &"\n", 1);
	ft_putnbr(-42);
	write(1, &"\n", 1);
}*/
