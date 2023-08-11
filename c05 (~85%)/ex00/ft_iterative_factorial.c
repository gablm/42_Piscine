/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:13:21 by gfragoso          #+#    #+#             */
/*   Updated: 2023/07/25 13:41:31 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	res;

	if (nb == 0)
		nb = 1;
	if (nb < 0)
		nb = 0;
	res = nb--;
	while (nb > 0)
		res *= nb--;
	return (res);
}

/*#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv){
	(void)argc;
	printf("%i", ft_iterative_factorial(atoi(argv[1])));
	return 0;
}*/
