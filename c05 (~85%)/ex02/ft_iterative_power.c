/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:42:12 by gfragoso          #+#    #+#             */
/*   Updated: 2023/07/25 16:06:23 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	res = 1;
	while (power--)
		res *= nb;
	return (res);
}

/*#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv){
	(void)argc;
	printf("%i", ft_iterative_power(atoi(argv[1]), atoi(argv[2])));
	return 0;
}*/
