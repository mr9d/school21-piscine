#include "ft_list.h"

int	ft_list_size (t_list *begin_list)
{
	int	res;

	res = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		res++;
	}
	return (res);
}
