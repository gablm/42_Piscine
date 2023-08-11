/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 10:45:14 by pevangel          #+#    #+#             */
/*   Updated: 2023/07/23 14:32:30 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(char left, char fill, char right, int size)
{
	int	i;

	i = 0;
	if (size >= 1)
		ft_putchar(left);
	while (size > 2 && size - 2 > i)
	{
		ft_putchar(fill);
		i++;
	}
	if (size >= 2)
		ft_putchar(right);
	if (size >= 1)
		ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (y >= 1)
		print_line('A', 'B', 'A', x);
	while (y > 2 && y - 2 > i)
	{
		print_line('B', ' ', 'B', x);
		i++;
	}
	if (y >= 2)
		print_line('C', 'B', 'C', x);
}
