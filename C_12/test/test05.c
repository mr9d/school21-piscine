#include <stdio.h>
#include <stdlib.h>
#include "../ex05/ft_list.h"

t_list	*ft_list_push_strs (int size, char **strs);

void	print_t_list_str (t_list *begin)
{
	int	i;

	printf("[");
	i = 0;
	while (begin)
	{
		if (i++ > 0)
			printf(", ");
		printf("\"%s\"", *(char **)(begin->data));
		begin = begin->next;
	}
	printf("]\n");
}

int	main(void)
{
	t_list	*begin;
	char	**strs;

	strs = malloc(sizeof(*strs) * 5);
	strs[0] = "hello";
	strs[1] = "world";
	strs[2] = "";
	strs[3] = "keep";
	strs[4] = "it up!";
	begin = ft_list_push_strs(0, strs);
	print_t_list_str(begin);
	begin = ft_list_push_strs(1, strs);
	print_t_list_str(begin);
	begin = ft_list_push_strs(2, strs);
	print_t_list_str(begin);
	begin = ft_list_push_strs(5, strs);
	print_t_list_str(begin);
	return (0);
}
