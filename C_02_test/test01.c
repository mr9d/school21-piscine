#include <stdio.h>
#include <string.h>

char	*ft_strncpy (char *dest, char *src, unsigned int n);

void	test (char *dest, char *src, unsigned int n)
{
	printf("Dest: %s | Source: %s | n=%d\n", dest, src, n);
	//strncpy(dest, src, n);
	ft_strncpy(dest, src, n);
	printf("Dest: %s | Source: %s\n", dest, src);
}

int	main (void)
{
	char	dest[] = "Hello";
	char	src[] = "world";
	test(dest, src, 2);

	char	dest1[] = "What";
	char	src1[] = "The hell";
	test(dest1, src1, 2);

	char	dest2[] = "qwqweqweqwewq";
	char	src2[] = "123";
	test(dest2, src2, 6);

	printf("%s %s\n", dest, src);
	printf("%s %s\n", dest1, src1);
}
