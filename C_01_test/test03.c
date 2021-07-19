#include <stdio.h>

void	ft_div_mod (int a, int b, int *div, int *mod);

int	main(void)
{
	int	a;
	int b;
	int div;
	int mod;
	int *divPtr;
	int *modPtr;

	a = 10;
	b = 3;
	div = 0;
	mod = 0;
	divPtr = &div;
	modPtr = &mod;
	ft_div_mod(a, b, divPtr, modPtr);
	printf("%d/%d=%d(%d)\n", a, b, div, mod);
	a = 100;
	b = 345;
	ft_div_mod(a, b, divPtr, modPtr);
	printf("%d/%d=%d(%d)\n", a, b, div, mod);
	a = -15;
	b = 2;
	ft_div_mod(a, b, divPtr, modPtr);
	printf("%d/%d=%d(%d)\n", a, b, div, mod);
	a = 0;
	b = -5;
	ft_div_mod(a, b, divPtr, modPtr);
	printf("%d/%d=%d(%d)\n", a, b, div, mod);
	return (0);
}
