#include <stdio.h>

int	ft_iterative_factorial (int nb);

void	test (int nb)
{
	printf("Factorial of %d = %d\n", nb, ft_iterative_factorial(nb));
}

int	main(void)
{
	test(-10);
	test(-1);
	test(0);
	test(1);
	test(2);
	test(3);
	test(4);
	test(10);
	return (0);
}
