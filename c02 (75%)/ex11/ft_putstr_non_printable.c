/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:28:39 by gfragoso          #+#    #+#             */
/*   Updated: 2023/07/22 11:46:12 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_abs(char c)
{
	int	a;

	a = c;
	if (c < 0)
		a = 256 + c;
	return (a);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= ' ' && str[i] <= '~')
		{
			ft_putchar(str[i]);
		}
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[ft_abs(str[i]) / 16]);
			ft_putchar("0123456789abcdef"[ft_abs(str[i]) % 16]);
		}
		i++;
	}
}
int	main(){
	char	a[] = "aaaa";
	a[2] = -6;
	ft_putstr_non_printable(a);
}
