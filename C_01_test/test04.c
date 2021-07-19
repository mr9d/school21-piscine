#include <stdio.h>

void	ft_ultimate_div_mod (int *a, int *b);

void	check(int a, int b)
{
	printf("A=%d, B=%d | ", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("A=%d, B=%d\n", a, b);
}

int	main(void)
{
	check(10, 2);
	check(2, 15);
	check(100, 230);
	check(88, -2);
	check(-10, 2);
	return (0);
}
