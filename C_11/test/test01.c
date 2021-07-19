#include <stdio.h>

int	*ft_map (int *tab, int length, int(*f)(int));

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

int	ft_plus_one (int nbr)
{
	return (nbr + 1);
}

void	test (int *tab, int length)
{
	print_arr_int(tab, length);
	printf("\n");
	print_arr_int(ft_map(tab, length, &ft_plus_one), length);
	printf("\n");
}

int	main(void)
{
	int	tab[3];

	tab[0] = 42;
	tab[1] = 12;
	tab[2] = 56;
	test(0, 3);
	test(tab, 0);
	test(tab, 1);
	test(tab, 3);
	return (0);
}
