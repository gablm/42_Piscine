/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:50:12 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/03 10:46:12 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi_base(char *str, char *base);

int	ft_countchar(char *str, char to_find);

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

int	total_size(int n, int len)
{
	int	res;

	res = 1;
	if (n < 0)
		res = 2;
	while (n / len != 0)
	{
		n /= len;
		res++;
	}
	return (res);
}

int	ft_abs(int c)
{
	if (c < 0)
		return (-c);
	return (c);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		n;
	int		chars;
	int		len;
	int		rn;
	char	*res;

	if (ft_valid_base(base_from) == 0 || ft_valid_base(base_to) == 0)
		return (NULL);
	n = ft_atoi_base(nbr, base_from);
	len = 0;
	while (base_to[len])
		len++;
	chars = total_size(n, len);
	res = (char *)malloc(sizeof(char) * (chars + 1));
	res[chars] = '\0';
	rn = n;
	while (chars > 0)
	{
		res[--chars] = base_to[ft_abs(n % len)];
		n /= len;
	}
	if (rn < 0)
		res[0] = '-';
	return (res);
}

/*int main(int argc, char **argv){
	(void)argc;
	if (argc != 4) return (0);
	char *b = ft_convert_base(argv[1], argv[2], argv[3]);
	printf("%s", b);
	free(b);
}*/