#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy (char *dest, char *src, unsigned int size);

void	test (char *dest, char *src, unsigned int n)
{
	unsigned int	res;
	
	printf("Dest: %s | Source: %s | n=%d\n", dest, src, n);
	//res = strlcpy(dest, src, n);
	res = ft_strlcpy(dest, src, n);
	printf("Dest: %s | Source: %s | Res: %d\n", dest, src, res);
}

int	main (void)
{
	char	dest[] = "Hello";
	char	src[] = "world";
	test(dest, src, 2);

	char	dest1[] = "What";
	char	src1[] = "The hell";
	test(dest1, src1, 0);

	char	dest2[] = "qwqweqweqwewq";
	char	src2[] = "123";
	test(dest2, src2, 6);

	printf("%s %s\n", dest, src);
	printf("%s %s\n", dest1, src1);
}
