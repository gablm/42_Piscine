/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfragoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 13:51:10 by gfragoso          #+#    #+#             */
/*   Updated: 2023/07/22 11:05:51 by gfragoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	l;

	i = 0;
	l = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (l == 1)
				str[i] -= 32;
			l = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			l = 0;
		else
			l = 1;
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int main(){
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *b = ft_strcapitalize(a);
	printf("%s", b);
	return 0;
}*/
