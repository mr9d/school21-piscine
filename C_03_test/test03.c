#include <stdio.h>
#include <string.h>

char	*ft_strncat (char *dest, char *src, unsigned int nb);

void	test (char *dest, char *src, unsigned int nb)
{
	printf("Before | Dest: %s | Src: %s | nb=%d\n", dest, src, nb);
	ft_strncat(dest, src, nb);
	printf("After  | Dest: %s | Src: %s\n", dest, src);
}

int	main (void)
{
	char	str1[128] = "Hello";
	char	str2[128] = "world";
	test(str1, str2, 2);

	char	str11[128] = "";
	char	str21[128] = "tratata";
	test(str11, str21, 100);

	char	str12[128] = "ololo";
	char	str22[128] = "";
	test(str12, str22, 3);

	char	str13[128] = "Tram";
	char	str23[128] = "paramparam";
	test(str13, str23, 0);
}
