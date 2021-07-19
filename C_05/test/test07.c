#include <stdio.h>

int	ft_find_next_prime (int nb);

void	test (int nb)
{
	printf("%d next prime: %d\n", nb, ft_find_next_prime(nb));
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
	test(9);
	test(1021);
	test(1024);
	test(2147483626);
	test(2147483647);
	test(-2147483648);
	return (0);
}
