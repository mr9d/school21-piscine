#include <stdio.h>
#include <stdlib.h>
#include "../ex11/ft_list.h"

t_list	*ft_create_elem (void *data);
t_list	*ft_list_find (t_list *begin_list, void *data_ref, int (*cmp)());

int	cmp	(void *data, void *data_ref)
{
	int	d;
	int	r;

	d = *(int *)(data);
	r = *(int *)(data_ref);
	return (d % r);
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
	int		*data_ref;
	t_list	*elem;

	data_ref = malloc(sizeof(*data_ref));
	*data_ref = 2;
	print_t_list_int(begin);
	elem = ft_list_find(begin, data_ref, &cmp);
	printf("First even: ");
	if (elem == 0)
		printf("(null)\n");
	else
		printf("%d\n", *(int *)(elem->data));
}

int	main (void)
{
	t_list	*begin;
	int		*data;
	int		*data_ref;	

	data_ref = malloc(sizeof(*data_ref));
	*data_ref = 2;
	begin = 0;
	test(begin);
	data = malloc(sizeof(*data));
	*data = 5;
	begin = ft_create_elem(data);
	test(begin);
	add(begin, 10);
	add(begin, 100);
	test(begin);
	return (0);
}
