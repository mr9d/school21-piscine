#include <stdio.h>
#include <string.h>

int ft_str_is_numeric(char *str);

void	test (char *str)
{
	printf("String: %s | Is numeric: %d\n", str, ft_str_is_numeric(str));
}

int	main (void)
{
	test("12345");
	test("-2");
	test("asd");
	test("12as34fg44");
	test("a3d5h1k9");
	test("0");
	test("");
}
