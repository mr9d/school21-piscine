#include <stdio.h>
#include <stdlib.h>
#include "../ex03/ft_list.h"

t_list	*ft_list_last (t_list *begin_list);
t_list	*ft_create_elem (void *data);

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

void	test (t_list *begin)
{
	t_list	*last;

	print_t_list_int(begin);
	last = ft_list_last(begin);
	if (last == 0)
		printf("Last: (null)\n");
	else
		printf("Last: %d\n", *(int *)(last->data));
}

int	main (void)
{
	t_list	*begin;
	int		*data;

	begin = 0;
	test(begin);
	data = malloc(sizeof(*data));
	*data = 5;
	begin = ft_create_elem(data);
	test(begin);
	add(begin, 10);
	test(begin);
	add(begin, 100);
	test(begin);
	return (0);
}
