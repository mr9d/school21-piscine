#include <stdio.h>
#include <string.h>

int ft_str_is_printable(char *str);

void	test (char *str)
{
	printf("String: %s | Is printable: %d\n", str, ft_str_is_printable(str));
}

int	main (void)
{
	test("qwe123fdf#$%)(");
	test("wqeknl;qwe");
	test("123213");
	test("\x01\x05\x0a\x15");
	test("aasd das   ads");
	test("±~+_{}::__");
	test("?><ZX±§§");
	test("");
}
