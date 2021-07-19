#include <stdio.h>
#include <string.h>

char	*ft_strcat (char *dest, char *src);

void	test (char *dest, char *src)
{
	printf("Before | Dest: %s | Src: %s\n", dest, src);
	ft_strcat(dest, src);
	printf("After  | Dest: %s | Src: %s\n", dest, src);
}

int	main (void)
{
	char	str1[128] = "Hello";
	char	str2[128] = "world";
	test(str1, str2);

	char	str11[128] = "";
	char	str21[128] = "tratata";
	test(str11, str21);

	char	str12[128] = "ololo";
	char	str22[128] = "";
	test(str12, str22);

	char	str13[128] = "Tram";
	char	str23[128] = "paramparam";
	test(str13, str23);
}
