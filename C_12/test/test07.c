#include <stdio.h>
#include <stdlib.h>
#include "../ex07/ft_list.h"

t_list	*ft_create_elem (void *data);
t_list	*ft_list_at (t_list *begin_list, unsigned int nbr);

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

void	test (t_list *begin, int i)
{
	t_list	*elem;

	elem = ft_list_at(begin, i);
	printf("Element at %d: ", i);
	if (elem == 0)
		printf("(null)\n");
	else
		printf("%d\n", *(int *)(elem->data));
}

int	main (void)
{
	t_list	*begin;
	int		*data;

	begin = 0;
	print_t_list_int(begin);
	test(begin, 0);
	test(begin, 1);
	test(begin, 2);
	data = malloc(sizeof(*data));
	*data = 5;
	begin = ft_create_elem(data);
	add(begin, 10);
	add(begin, 100);
	print_t_list_int(begin);
	test(begin, 0);
	test(begin, 2);
	test(begin, 5);
	return (0);
}
