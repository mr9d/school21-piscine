#include <stdio.h>
#include <string.h>

int ft_str_is_lowercase(char *str);

void	test (char *str)
{
	printf("String: %s | Is lowercase: %d\n", str, ft_str_is_lowercase(str));
}

int	main (void)
{
	test("asdf");
	test("asd ggg");
	test("123");
	test("aaaBBBggg");
	test("HELLO");
	test("a");
	test("");
}
