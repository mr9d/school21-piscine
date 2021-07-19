#include <stdio.h>

int	ft_atoi_base (char *str, char *base);

void	test (char *str, char *base)
{
	printf("\"%s\" base \"%s\" = %d\n", str, base, ft_atoi_base(str, base));
}

int	main (void)
{
	test("6023", "0123456789");
	test("     +++--++-7811asd+123---", "0123456789");
	test(" \n   +++709qwre     123", "0123456789");
	test("6 0 2 3", "0123456789");
	test("5+7+1+0", "0123456789");
	test("-+-+---10543", "0123456789");
	test("2147483647", "0123456789");
	test("-2147483648", "0123456789");
	test("0", "0123456789");
	test("-00000-", "0123456789");
	test("AF", "0123456789ABCDEF");
	test("   -0101010111122222", "01");
	test("123", " 0123456789");
	test("asdfds", "");
	test("asdfds", "123+567");
	test("7456", "01234456789");
	return (0);
}
