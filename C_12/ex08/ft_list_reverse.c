#include "ft_list.h"

void	ft_list_reverse (t_list **begin_list)
{
	t_list	*prev;
	t_list	*next;

	if (*begin_list == 0 || (*begin_list)->next == 0)
		return ;
	prev = 0;
	while (*begin_list != 0)
	{
		next = (*begin_list)->next;
		(*begin_list)->next = prev;
		prev = *begin_list;
		*begin_list = next;
	}
	*begin_list = prev;
}
