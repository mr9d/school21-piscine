#include <stdio.h>

int	ft_strlen(char *str);

void	test (char *str)
{
	printf("String: \"%s\"\n", str);
	printf("Length: %d\n", ft_strlen(str));
}

int	main(void)
{
	test("Hello world");
	test("");
	test("1");
	test("sdahflasdhflsafdhjlsakdflhfkjlshdflkashflkhjfdsfas");
	test("kaa");
	return (0);
}
