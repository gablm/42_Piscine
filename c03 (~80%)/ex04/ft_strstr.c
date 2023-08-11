/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:10:37 by gfragoso          #+#    #+#             */
/*   Updated: 2023/08/04 11:13:38 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	h;

	i = 0;
	h = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[h])
		{
			h++;
			if (to_find[h] == '\0')
			{
				h = i - h + 1;
				return (str + h);
			}
		}
		else
			h = 0;
		i++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>
int main(int argc, char **argv){
	(void)argc;
	char *a = strstr(argv[1], argv[2]);
	char *b = ft_strstr(argv[1], argv[2]);
	printf("%s\n%s", a, b);
	return (0);
}*/