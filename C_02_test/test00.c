#include <stdio.h>
#include <string.h>

char	*ft_strcpy (char *dest, char *src);

void	test(char *dest, char *src)
{
	printf("Dest: %s | Source: %s\n", dest, src);
	//strcpy(dest, src);
	ft_strcpy(dest, src);
	printf("Dest: %s | Source: %s\n", dest, src);
}

int	main (void)
{
	char	dest[] = "Hello";
	char	src[] = "world";
	test(dest, src);

	char	dest1[] = "What";
	char	src1[] = "The hell";
	test(dest1, src1);

	char	dest2[] = "qwqweqweqwewq";
	char	src2[] = "123";
	test(dest2, src2);

	printf("%s %s\n", dest, src);
	printf("%s %s\n", dest1, src1);
}
