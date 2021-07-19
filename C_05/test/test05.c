#include <stdio.h>

int	ft_sqrt (int nb);

void	test (int nb)
{
	printf("Sqrt(%d) = %d\n", nb, ft_sqrt(nb));
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
	test(12345678);
	test(1024);
	return (0);
}
