#include <stdio.h>
#include <string.h>

char	*ft_strupcase (char *str);

void	test (char *str)
{
	printf("String 1: %s\n", str);
	ft_strupcase(str);
	printf("String 2: %s\n", str);
}

int	main (void)
{
	char str[] = "--hello world--";
	test(str);
	char str1[] = "TWO WORDS";
	test(str1);
	char str2[] = "123";
	test(str2);
	char str3[] = "";
	test(str3);
}
