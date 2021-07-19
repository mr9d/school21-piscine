#include <stdio.h>
#include <stdlib.h>

int	ft_any (char **tab, int(*f)(char*));

void	print_arr_str (char **arr)
{
	int	i;

	if (arr == 0)
	{
		printf("(null)");
		return ;
	}
	printf("[");
	i = 0;
	while (arr[i] != 0)
	{
		if (i > 0)
			printf(", ");
		printf("\"%s\"", arr[i]);
		i++;
	}
	printf("]");
}

int	ft_is_len_even (char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i % 2 == 0);
}

void	test (char **tab)
{
	print_arr_str(tab);
	printf("\nAny str len even: %d\n", ft_any(tab, &ft_is_len_even));
}

int	main(void)
{
	char	**tab;

	tab = malloc(sizeof(*tab) * 4);
	tab[0] = "hello";
	tab[1] = "world";
	tab[2] = "here";
	tab[3] = 0;
	test(0);
	test(tab);
	tab[2] = 0;
	test(tab);
	tab[1] = 0;
	test(tab);
	tab[0] = 0;
	test(tab);
	return (0);
}
