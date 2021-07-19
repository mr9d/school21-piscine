#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin (int size, char **strs, char *sep);

void	print_arr (char **arr, int len)
{
	int	i;

	if (arr == 0 || len < 0)
	{
		printf("(null)");
		return ;
	}
	printf("[");
	i = 0;
	while (i < len)
	{
		printf("%s", arr[i]);
		if (i < len - 1)
			printf(", ");
		i++;
	}
	printf("]");
}

void	test (int size, char **strs, char *sep)
{
	printf("Strings: ");
	print_arr(strs, size);
	printf("\nSeparator: %s\n", sep);
	printf("Result: %s\n", ft_strjoin(size, strs, sep));
}

int	main(void)
{
	char	**strs;

	strs = 0;
	test(0, strs, "|");
	strs = malloc(sizeof(*strs) * 5);
	test(0, strs, "|");
	strs[0] = "hello";
	test(1, strs, "|");
	strs[1] = "world";
	test(2, strs, "--");
	strs[2] = "for";
	strs[3] = "the";
	strs[4] = "win";
	test(5, strs, "...");
	return (0);
}
