#include <stdio.h>
#include "../common/printarr.c"

void	ft_rev_int_tab (int *tab, int size);

void	test (int *arr, int size)
{
	print_arr_int(arr, size);
	ft_rev_int_tab(arr, size);
	print_arr_int(arr, size);
}

int	main (void)
{
	int arr[] = {1, 2, 3, 4, 5};
	test(arr, 5);
	int arrE[] = {};
	test(arrE, 0);
	int arr2[] = {55, 1, 888, 45, 0, -4, 5, 7};
	test(arr2, 8);
	return (0);
}
