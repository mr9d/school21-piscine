#include <stdio.h>
#include <stdlib.h>
#include "../ex00/ft_list.h"

t_list	*ft_create_elem (void *data);

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

void	add (t_list *elem, int n)
{
	t_list	*end;
	int		*data;

	end = elem;
	while (elem->next)
		elem = elem->next;
	data = malloc(sizeof(*data));
	*data = n;
	elem->next = ft_create_elem(data);
}

int	main(void)
{
	t_list	*begin;
	int		*data;

	begin = 0;
	print_t_list_int(begin);
	data = malloc(sizeof(*data));
	*data = 5;
	begin = ft_create_elem(data);
	print_t_list_int(begin);
	add(begin, 10);
	print_t_list_int(begin);
	add(begin, -10);
	print_t_list_int(begin);
	add(begin, 222);
	print_t_list_int(begin);
	return (0);
}
