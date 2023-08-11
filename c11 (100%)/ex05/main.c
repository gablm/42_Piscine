/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 15:34:39 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/08 16:29:15 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str);

void	ft_putnbr(int nbr);

void	do_op(int a, int b, char op)
{
	if (op == '+')
		ft_putnbr(a + b);
	if (op == '-')
		ft_putnbr(a - b);
	if (op == '/')
	{
		if (b == 0)
		{
			write(1, "Stop : division by zero\n", 24);
			return ;
		}
		ft_putnbr(a / b);
	}
	if (op == '*')
		ft_putnbr(a * b);
	if (op == '%')
	{
		if (b == 0)
		{
			write(1, "Stop : modulo by zero\n", 22);
			return ;
		}
		ft_putnbr(a / b);
	}
}

int	valid_op(char *c)
{
	if (c[0] == '\0')
		return (0);
	if (c[1] != '\0')
		return (0);
	return (c[0] == '+' || c[0] == '-' 
		|| c[0] == '/' || c[0] == '*' || c[0] == '%');
}

int	main(int argc, char **argv)
{
	int	a;
	int	b;

	if (argc != 4)
		return (0);
	if (!valid_op(argv[2]))
	{
		write(1, "0\n", 2);
		return (0);
	}
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	do_op(a, b, argv[2][0]);
	return (0);
}
