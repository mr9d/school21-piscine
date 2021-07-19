#include <stdio.h>

int	ft_fibonacci (int index);

void	test (int index)
{
	printf("Element %d: %d\n", index, ft_fibonacci(index));
}

int	main(void)
{
	test(-45);
	test(-1);
	test(0);
	test(1);
	test(2);
	test(3);
	test(4);
	test(5);
	test(6);
	test(7);
	test(8);
	return (0);
}
