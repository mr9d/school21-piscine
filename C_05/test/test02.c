#include <stdio.h>

int	ft_iterative_power (int nb, int power);

void	test (int nb, int power)
{
	printf("%d ^ %d = %d\n", nb, power, ft_iterative_power(nb, power));
}

int	main(void)
{
	test(0, 0);
	test(0, 1);
	test(1, 0);
	test(1, 1);
	test(-10, 0);
	test(10, 0);
	test(0, 10);
	test(0, -10);
	test(0, -1);
	test(3, 4);
	test(4, 10);
	test(2, 10);
	return (0);
}
