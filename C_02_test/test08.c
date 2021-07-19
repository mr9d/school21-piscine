#include <stdio.h>
#include <string.h>

char	*ft_strlowcase (char *str);

void	test (char *str)
{
	printf("String 1: %s\n", str);
	ft_strlowcase(str);
	printf("String 2: %s\n", str);
}

int	main (void)
{
	char str[] = "--HeLLo WorLD--";
	test(str);
	char str1[] = "lower case";
	test(str1);
	char str2[] = "123";
	test(str2);
	char str3[] = "";
	test(str3);
}
