#include "ex00/ft_create_elem.c"
#include "ex02/ft_list_size.c"
#include "ft_list.h"

#include <stdio.h>
#include <stdlib.h>

int main()
{
	t_list *res = ft_create_elem("a");
	printf("%d", ft_list_size(res));
	return 0;
}