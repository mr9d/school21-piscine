#include <stdio.h>
#include <string.h>

char	*ft_strcapitalize (char *str);

void	test (char *str)
{
	printf("String 1: %s\n", str);
	ft_strcapitalize(str);
	printf("String 2: %s\n", str);
}

int	main (void)
{
	char str[] = "that's a Long sentAnce with DiffeREnt words";
	test(str);
	char str1[] = "That's 1another2 senTAnce";
	test(str1);
	char str2[] = "123sadsasda123";
	test(str2);
	char str3[] = "";
	test(str3);
}
