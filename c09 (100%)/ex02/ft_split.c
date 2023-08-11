/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:27:09 by gfragoso          #+#    #+#             */
/*   Updated: 2023/07/31 10:28:49 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_newstr(char *source, int len)
{
	int		i;
	char	*res;

	i = 0;
	res = (char *)malloc(sizeof(char) * (len + 1));
	while (source[i] && len > i)
	{
		res[i] = source[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

int	ft_is_sep(char *a, char *charset)
{
	int	i;
	int	h;

	i = 0;
	h = 0;
	while (a[i])
	{
		while (charset[h])
		{
			if (a[i] == charset[h])
				return (i);
			h++; 
		}
		h = 0;
		i++;
	}
	return (i);
}

int	ft_next_i(int i, int v, char *c)
{
	if (c[v] != '\0')
		return (i + v + 1);
	else
		return (i + v);
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		i;
	int		h;
	int		v;

	i = 0;
	h = 0;
	while (str[i])
	{
		if (ft_is_sep(&str[i], charset) > 0)
			h++;
		i = ft_next_i(i, ft_is_sep(&str[i], charset), (str + i));
	}
	res = (char **)malloc(sizeof(char **) * (h + 1));
	i = 0;
	h = 0;
	while (str[i])
	{
		v = ft_is_sep(&str[i], charset);
		if (v > 0)
			res[h++] = ft_newstr(&str[i], v);
		i = ft_next_i(i, v, (str + i));
	}
	res[h] = 0;
	return (res);
}
/*
int	main(void)
{
	char	**a;

	a = ft_split("asas0s", "s");
	for (int i = 0; a[i] != 0; i++)
		printf("%d: %s\n", i, a[i]);
	return (0);
}*/
