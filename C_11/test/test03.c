#include <stdio.h>
#include <stdlib.h>

int	ft_count_if (char **tab, int length, int(*f)(char*));

void	print_arr_str (char **arr, int length)
{
	int	i;

	if (arr == 0)
	{
		printf("(null)");
		return ;
	}
	printf("[");
	i = 0;
	while (i < length)
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

void	test (char **tab, int length)
{
	print_arr_str(tab, length);
	printf(" | len = %d\nCount str len even: %d\n",
		length,
		ft_count_if(tab, length, &ft_is_len_even));
}

int	main(void)
{
	char	**tab;

	tab = malloc(sizeof(*tab) * 4);
	tab[0] = "hellou";
	tab[1] = "world";
	tab[2] = "here";
	tab[3] = "";
	test(0, 3);
	test(tab, 0);
	test(tab, 1);
	test(tab, 4);
	return (0);
}
