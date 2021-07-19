#include <stdio.h>

void	ft_swap (int *a, int *b);

int	main(void)
{
	int	a;
	int b;

	a = 1234;
	b = 6789;
	printf("%d %d\n", a, b);
	ft_swap(&a, &b);
	printf("%d %d\n", a, b);
	return (0);
}
