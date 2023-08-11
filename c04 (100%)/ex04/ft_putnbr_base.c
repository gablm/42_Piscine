/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 11:57:38 by gfragoso          #+#    #+#             */
/*   Updated: 2023/07/26 12:39:17 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

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

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	if (ft_valid_base(base) == 0)
		return ;
	len = ft_strlen(base);
	if (nbr == -2147483648)
	{
		ft_putnbr_base(nbr / len, base);
		ft_putnbr_base(nbr % len, base);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_base(-nbr, base);
		return ;
	}
	if (nbr > len - 1)
	{
		ft_putnbr_base(nbr / len, base);
		ft_putnbr_base(nbr % len, base);
		return ;
	}
	ft_putchar(base[nbr]);
}

/*int main(){
	ft_putnbr_base(13, "1");
	write(1, &"\n", 1);
	ft_putnbr_base(-120, "poneyvif");
	write(1, &"\n", 1);
}*/
