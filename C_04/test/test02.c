#include <stdio.h>

void	ft_putnbr (int nb);

void	test (int nb)
{
	ft_putnbr(nb);
	printf(" = %d: ", nb);
	printf("\n");
}

int	main (void)
{
	test(0);
	test(962);
	test(12);
	test(-2);
	test(6);
	test(-79145);
	test(123456789);
	test(2147483647);
	test(-2147483648);
	return (0);
}
