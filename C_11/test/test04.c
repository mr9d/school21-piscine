#include <stdio.h>

int	ft_is_sort (int *tab, int length, int(*f)(int, int));

void	print_arr_int (int *arr, int len)
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
		printf("%d", arr[i]);
		if (i < len - 1)
			printf(", ");
		i++;
	}
	printf("]");
}

int	ft_cmpint (int a, int b)
{
	return (a - b);
}

void	test (int *tab, int length)
{
	print_arr_int(tab, length);
	printf(" | n = %d\n", length);
	printf("Is sorted: %d\n", ft_is_sort(tab, length, &ft_cmpint));
}

int	main(void)
{
	int	tab[4];

	tab[0] = 42;
	tab[1] = 12;
	tab[2] = 56;
	tab[3] = 102;
	test(0, 3);
	test(tab, 0);
	test(tab, 1);
	test(tab, 2);
	test(tab, 4);
	tab[1] = 42;
	test(tab, 3);
	tab[0] = 1;
	test(tab, 4);
	tab[1] = 0;
	tab[2] = -2;
	test(tab, 3);
	return (0);
}
