#include <stdio.h>
#include <string.h>

int	ft_strcmp (char *s1, char *s2);

void	test(char *s1, char *s2)
{
	int res = ft_strcmp(s1, s2);
	int exp = strcmp(s1, s2);
	printf("String 1: %s\n", s1);
	printf("String 2: %s | Comparison: %d | Expected: %d\n", s2, res, exp);
}

int	main (void)
{
	test("hello", "world");
	test("aaa", "aaaH");
	test("Haha", "haha");
	test("", "");
	test("TTT", "TTT");
	test("Hello", "Hell");
	test("pam", "");
	test("", "tram");
}
