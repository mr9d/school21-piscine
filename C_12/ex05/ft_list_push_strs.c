#include "ft_list.h"

t_list	*ft_list_push_strs (int size, char **strs)
{
	t_list	*elem;
	t_list	*prev;
	int		i;

	if (size == 0)
		return (0);
	prev = 0;
	i = 0;
	while (i < size)
	{
		elem = ft_create_elem(&strs[i]);
		elem->next = prev;
		prev = elem;
		i++;
	}
	return (elem);
}
