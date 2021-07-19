#include <stdlib.h>

int	*ft_map (int *tab, int length, int(*f)(int))
{
	int	*res;
	int	i;

	if (tab == 0)
		return (0);
	res = malloc(sizeof(*res) * length);
	i = 0;
	while (i < length)
	{
		res[i] = f(tab[i]);
		i++;
	}
	return (res);
}
