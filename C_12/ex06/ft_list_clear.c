#include "ft_list.h"
#include <stdlib.h>

void	ft_list_clear (t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*next;

	while (begin_list != 0)
	{
		next = begin_list->next;
		free_fct(begin_list->data);
		free(begin_list);
		begin_list = next;
	}
}
