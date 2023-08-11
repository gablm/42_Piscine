/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:50:47 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/06 17:19:21 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		i;
	int		dsi;
	int		sri;

	dsi = ft_strlen(dest);
	sri = ft_strlen(src);
	if ((int)size > dsi)
		sri += dsi;
	else
		sri += size;
	i = 0;
	while (src[i] && (dsi + i < (int)size - 1))
	{
		dest[dsi + i] = src[i];
		i++;
	}
	dest[dsi + i] = '\0';
	return (sri);
}

/*#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>
int main(int argc, char **argv)
{
	(void)argc;
	char a[40], c[40];
	strcpy(a, argv[1]);
	strcpy(c, argv[1]);
	char *b = argv[2];
	int h = atoi(argv[3]);
	int an = strlcat(a, b, h);
	printf("%s: %d\n", a, an);
	int cn = ft_strlcat(c,b,h);
	printf("%s: %d", c, cn);
}*/
