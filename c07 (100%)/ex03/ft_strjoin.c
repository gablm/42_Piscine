/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:00:33 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/06 15:31:45 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_total_size(int size, char **strs, char *sep)
{
	int	res;
	int	i;

	if (size <= 0)
		return (1);
	i = 0;
	res = ft_strlen(sep) * size;
	while (i < size)
		res += ft_strlen(strs[i++]);
	return (res);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*res;
	int		i;
	int		h;
	int		tsize;

	i = 0;
	res = (char *)malloc(sizeof(char) * ft_total_size(size, strs, sep));
	if (res == NULL)
		return (0);
	tsize = 0;
	while (i < size)
	{
		h = 0; 
		while (strs[i][h])
			res[tsize++] = strs[i][h++];
		h = 0; 
		while (sep[h] && i != size - 1)
			res[tsize++] = sep[h++];
		i++;
	}
	res[tsize] = '\0';
	return (res);
}

#include <stdio.h>
#include <string.h>
int main(int argc, char **argv){
	if (argc != 5) return (0);
	char *b[] = {argv[1], argv[2], argv[3]};
	char *c = ft_strjoin(3, b, argv[4]);
	printf("%p\n", c);
	printf("%s", c);
	free(c);
}
