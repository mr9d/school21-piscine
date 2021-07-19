#include <stdio.h>
#include <string.h>

int ft_str_is_uppercase(char *str);

void	test (char *str)
{
	printf("String: %s | Is uppercase: %d\n", str, ft_str_is_uppercase(str));
}

int	main (void)
{
	test("ASDF");
	test("DDD GGG");
	test("123");
	test("aaaBBBggg");
	test("hello");
	test("F");
	test("");
}
