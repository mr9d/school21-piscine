#include <stdio.h>
#include <string.h>

int	ft_strncmp (char *s1, char *s2, unsigned int n);

void	test(char *s1, char *s2, unsigned int n)
{
	int res = ft_strncmp(s1, s2, n);
	int exp = strncmp(s1, s2, n);
	printf("String 1: %s | n=%d\n", s1, n);
	printf("String 2: %s | Comparison: %d | Expected: %d\n", s2, res, exp);
}

int	main (void)
{
	test("hello", "world", 10);
	test("aaa", "aaaH", 2);
	test("Haha", "haha", 2);
	test("", "", 0);
	test("TTT", "TTT", 66);
	test("Hello", "Hell", 1);
	test("pam", "", 0);
	test("", "tram", 10);
}
