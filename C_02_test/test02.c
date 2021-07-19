#include <stdio.h>
#include <string.h>

int ft_str_is_alpha (char *str);

void	test (char *str)
{
	printf("String: %s | Is alpha: %d\n", str, ft_str_is_alpha(str));
}

int	main (void)
{
	test("asdfAsdf");
	test("asd qwe");
	test("---");
	test("-asd--");
	test("-asd das");
	test("SDF");
	test("");
}
