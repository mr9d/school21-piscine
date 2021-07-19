#include <stdio.h>
#include <stdlib.h>
#include "../ex02/ft_list.h"

int		ft_list_size (t_list *begin_list);
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

int	main (void)
{
	t_list	*begin;
	int		*data;

	begin = 0;
	print_t_list_int(begin);
	printf("Size: %d\n", ft_list_size(begin));
	data = malloc(sizeof(*data));
	*data = 5;
	begin = ft_create_elem(data);
	print_t_list_int(begin);
	printf("Size: %d\n", ft_list_size(begin));
	add(begin, 10);
	print_t_list_int(begin);
	printf("Size: %d\n", ft_list_size(begin));
	add(begin, 100);
	print_t_list_int(begin);
	printf("Size: %d\n", ft_list_size(begin));
	return (0);
}
