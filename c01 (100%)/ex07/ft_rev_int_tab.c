/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 13:04:06 by gfragoso          #+#    #+#             */
/*   Updated: 2023/07/20 14:05:18 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	pos;

	i = 0;
	while (i < size / 2)
	{
		temp = *(tab + i);
		pos = size - 1 - i;
		*(tab + i) = *(tab + pos);
		*(tab + pos) = temp;
		i++;
	}
}
