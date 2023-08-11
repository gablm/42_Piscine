/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 14:55:24 by gfragoso          #+#    #+#             */
/*   Updated: 2023/07/23 15:07:35 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	dsi;

	dsi = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0')
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
	char a[10] = "aaa";
	char *b = "cdef";
	strcat(a, b);
	printf("%s\n", a);
	char c[10] = "aaa";
	ft_strcat(c,b);
	printf("%s", c);
}*/