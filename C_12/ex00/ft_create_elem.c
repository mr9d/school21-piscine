#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem (void *data)
{
	t_list	*elem;

	elem = malloc(sizeof(*elem));
	if (elem == 0)
		return (0);
	elem->data = data;
	elem->next = 0;
	return (elem);
}
