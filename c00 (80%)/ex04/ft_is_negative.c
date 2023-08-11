/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:25:41 by gfragoso          #+#    #+#             */
/*   Updated: 2023/07/23 11:30:37 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	a;

	if (n < 0)
	{
		a = 'N';
	}
	else
	{
		a = 'P';
	}
	write(1, &a, 1);
}

/*
int	main(void)
{
	ft_is_negative(-1);
	ft_is_negative(22224);
	return 0;
}*/
