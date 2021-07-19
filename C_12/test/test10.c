#include <stdio.h>
#include <stdlib.h>
#include "../ex10/ft_list.h"

t_list	*ft_create_elem (void *data);
void	ft_list_foreach_if (t_list *begin_list,
			void (*f)(void *), void *data_ref, int (*cmp)());

void	print_int (void *nbr)
{
	printf("Print even: %d\n", *(int *)(nbr));
}

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

int	main (void)
{
	t_list	*begin;
	int		*data;
	int		*data_ref;	

	data_ref = malloc(sizeof(*data_ref));
	*data_ref = 2;
	begin = 0;
	print_t_list_int(begin);
	ft_list_foreach_if(begin, &print_int, data_ref, &cmp);
	data = malloc(sizeof(*data));
	*data = 5;
	begin = ft_create_elem(data);
	print_t_list_int(begin);
	ft_list_foreach_if(begin, &print_int, data_ref, &cmp);
	add(begin, 10);
	add(begin, 100);
	print_t_list_int(begin);
	ft_list_foreach_if(begin, &print_int, data_ref, &cmp);
	return (0);
}
