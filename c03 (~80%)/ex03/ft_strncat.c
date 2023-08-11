/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:55:24 by gfragoso          #+#    #+#             */
/*   Updated: 2023/07/25 12:29:38 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				dsi;

	dsi = ft_strlen(dest);
	i = 0;
	while (src[i] && i < nb)
	{
		dest[dsi++] = src[i++];
	}
	dest[dsi] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>
int main()
{
	char a[40] = "Hello";
	char c[40] = "Hello";
	char *b = "World";
	int n = 2;
	strncat(a, b, n);
	printf("%s!ed\n", a);
	ft_strncat(c,b,n);
	printf("%s!ed", c);
}*/