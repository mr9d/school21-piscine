#include <stdio.h>

int	*ft_range (int min, int max);

void	print_arr (int *arr, int len)
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

void	test (int min, int max)
{
	int	*arr;

	printf("Min: %d | Max: %d\n", min, max);
	arr = ft_range(min, max);
	print_arr(arr, max - min);
	printf("\n");
}

int	main(void)
{
	test(10, 20);
	test(-10, 20);
	test(0, 0);
	test(6, 2);
	test(0, 100);
	test(-10, -3);
	return (0);
}
