#include <stdio.h>

char	*ft_strdup (char *src);

void	test (char *src)
{
	char	*dst;

	printf("Src: %s\n", src);
	dst = ft_strdup(src);
	printf("Dst: %s\n", dst);
}

int	main(void)
{
	test("");
	test("1");
	test("Hello");
	test("What a wonderful world");
	test("gg");
	test(0);
	return (0);
}
