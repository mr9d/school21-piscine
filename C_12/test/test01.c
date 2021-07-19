#include <stdio.h>
#include <stdlib.h>
#include "../ex01/ft_list.h"

void	ft_list_push_front (t_list **begin_list, void *data);

void	print_t_list_int (t_list *begin)
{
	int	i;

	printf("[");
	i = 0;
	while (begin)
	{
		if (i++ > 0)
			printf(", ");
		printf("%d", *(int *)(begin->data));
		begin = begin->next;
	}
	printf("]\n");
}

int	main(void)
{
	t_list	*begin;
	int		*data;

	begin = 0;
	print_t_list_int(begin);
	data = malloc(sizeof(*data));
	*data = 5;
	ft_list_push_front(&begin, data);
	print_t_list_int(begin);
	data = malloc(sizeof(*data));
	*data = -5;
	ft_list_push_front(&begin, data);
	print_t_list_int(begin);
	data = malloc(sizeof(*data));
	*data = 123;
	ft_list_push_front(&begin, data);
	print_t_list_int(begin);
	data = malloc(sizeof(*data));
	*data = -63;
	ft_list_push_front(&begin, data);
	print_t_list_int(begin);
	return (0);
}
