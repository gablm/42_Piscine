/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:06:13 by gfragoso          #+#    #+#             */
/*   Updated: 2023/07/22 11:27:58 by gfragoso         ###   ########.fr       */
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

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = ft_strlen(src);
	while (src[i] != '\0' && i < size - 1 && size != 0)
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
		dest[i] = '\0';
	return (j);
}

/*#include <string.h>
#include <stdio.h>
int main(){
	char a[] = "aaa";
	char b[] = "bbbbb";
	unsigned int c = ft_strlcpy(a, b, 0);
	printf("%s", a);
	printf("%d", c);

	char c[] = "aaa";
	char d[] = "bbbbb";
	strlcpy(c, d, 2);
	printf("%s", c);
	return 0;
}*/
