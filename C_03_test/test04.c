#include <stdio.h>
#include <string.h>

char	*ft_strstr (char *str, char *to_find);

void	test (char *str, char *to_find)
{
	char	*res = ft_strstr(str, to_find);
	char	*exp = strstr(str, to_find);

	printf("String: %s | To find: %s\n", str, to_find);
	printf("Result: %s | Expected: %s\n", res, exp);
}

int	main (void)
{
	char str[128] = "Hello"; char to_find[128] = "";
	test(str, to_find);
	char str1[128] = ""; char to_find1[128] = "Hello";
	test(str1, to_find1);
	char str2[128] = "Hello"; char to_find2[128] = "Hell";
	test(str2, to_find2);
	char str3[128] = "Hello"; char to_find3[128] = "lo";
	test(str3, to_find3);
	char str4[128] = "Hello"; char to_find4[128] = "lohi";
	test(str4, to_find4);
	char str5[128] = "hello"; char to_find5[128] = "l";
	test(str5, to_find5);
	char str6[128] = "Hello"; char to_find6[128] = "e";
	test(str6, to_find6);
}
