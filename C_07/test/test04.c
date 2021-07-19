#include <stdio.h>
#include <stdlib.h>

char	*ft_convert_base (char *nbr, char *base_from, char *base_to);

void	test (char *nbr, char *base_from, char *base_to)
{
	char	*res;

	printf("Converting \"%s\" from \"%s\" to \"%s\"\n", nbr, base_from, base_to);
	res = ft_convert_base(nbr, base_from, base_to);
	printf("Result: %s\n", res);
}

int	main(void)
{
	test("12", "0123456789", "01");
	test("6023", "0123456789", "12345678");
	test("     +++--++-7811asd+123---", "0123456789", "01");
	test(" \n   +++709qwre     123", "0123456789", "asdf");
	test("6 0 2 3", "0123456789", "tyu");
	test("5+7+1+0", "0123456789", "01");
	test("-+-+---10543", "0123456789", "0123456789ABCDEF");
	test("2147483647", "0123456789", "0123456789ABCDEF");
	test("-2147483648", "0123456789", "01");
	test("0", "0123456789", "ponytail");
	test("-00000-", "0123456789", "012345");
	test("AF", "0123456789ABCDEF", "qwerty");
	test("   -0101010111122222", "01", "0123456789");
	test("123", " 0123456789", "01");
	test("asdfds", "", "1234");
	test("asdfds", "123+567", "tyui");
	test("7456", "01234456789", "");
	test("7456", "0123456789", "");
	return (0);
}
