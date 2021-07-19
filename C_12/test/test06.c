#include <stdio.h>
#include <stdlib.h>
#include "../ex06/ft_list.h"

t_list	*ft_create_elem (void *data);
void	ft_list_clear (t_list *begin_list, void (*free_fct)(void *));

void	free_int (void *nbr)
{
	printf("Free %d\n", *(int *)(nbr));
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

	begin = 0;
	print_t_list_int(begin);
	ft_list_clear(begin, &free_int);
	data = malloc(sizeof(*data));
	*data = 5;
	begin = ft_create_elem(data);
	add(begin, 10);
	add(begin, 100);
	print_t_list_int(begin);
	ft_list_clear(begin, &free_int);
	return (0);
}
