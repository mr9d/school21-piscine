#include <stdio.h>

void	ft_putnbr_base (int nbr, char *base);

void	test (int nbr, char *base)
{
	ft_putnbr_base(nbr, base);
	printf(" = %d in base \"%s\"\n", nbr, base);
}

int	main (void)
{
	test(123, "");
	test(123, "0123456789");
	test(123, "0123456789ABCDEF");
	test(123, "01");
	test(123, "ABCDEFAF");
	test(123, "QWE+123");
	test(123, "-QWE");
	test(123, "ASDFGH+");
	test(-123, "01");
	test(60247, "ponytail");
	test(2147483647, "01");
	test(-2147483648, "01234567");
	test(2147483647, "ABCDEF");
	test(-2147483648, "asdfgtrew");
	test(0, "asdfgtrew");
	test(0, "01");
	return (0);
}
