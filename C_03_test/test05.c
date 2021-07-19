#include <stdio.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

void	test (char *dest, char *src, unsigned int nb)
{
	unsigned int	res;
	printf("Before | Dest: %s | Src: %s | nb=%d\n", dest, src, nb);
	res = ft_strlcat(dest, src, nb);
	//res = strlcat(dest, src, nb);
	printf("After  | Dest: %s | Src: %s | Res: %d\n", dest, src, res);
}

int	main (void)
{
	char	str1[128] = "Hello";
	char	str2[128] = "world";
	test(str1, str2, 10);

	char	str11[128] = "";
	char	str21[128] = "tratata";
	test(str11, str21, 10);

	char	str12[128] = "ololo";
	char	str22[128] = "";
	test(str12, str22, 2);

	char	str13[128] = "Tram";
	char	str23[128] = "paramparam";
	test(str13, str23, 0);
	
	char	str14[128] = "Tram";
	char	str24[128] = "paramparam";
	test(str14, str24, 1);
}
