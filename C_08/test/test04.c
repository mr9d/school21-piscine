#include <stdlib.h>
#include <stdio.h>
#include "../ex04/ft_stock_str.h"

struct s_stock_str	*ft_strs_to_tab (int ac, char **av);

void	print_arr_str (char **arr, int len)
{
	int	i;

	if (arr == 0 || len < 0)
	{
		printf("(null)");
		return ;
	}
	printf("[");
	i = 0;
	while (i < len)
	{
		printf("\"%s\"", arr[i]);
		if (i < len - 1)
			printf(", ");
		i++;
	}
	printf("]");
}

void	print_arr_stock (struct s_stock_str *arr)
{
	int	i;

	if (arr == 0)
	{
		printf("(null)");
		return ;
	}
	printf("[");
	i = 0;
	while (arr[i].str != 0)
	{
		if (i > 0)
			printf(", ");
		printf("{%d, \"%s\", \"%s\"}", arr[i].size, arr[i].str, arr[i].copy);
		i++;
	}
	printf("]");
}

void	test (int ac, char **av)
{
	print_arr_str(av, ac);
	printf("\n");
	print_arr_stock(ft_strs_to_tab(ac, av));
	printf("\n");
}

int	main (void)
{
	char	**strs;

	strs = malloc(sizeof(*strs) * 4);
	strs[0] = "123";
	strs[1] = "qwe";
	strs[2] = "";
	strs[3] = "hello world";
	test(0, strs);
	test(1, strs);
	test(4, strs);
	return (0);
}
