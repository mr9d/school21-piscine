#include <stdlib.h>

int	ft_ultimate_range (int **range, int min, int max)
{
	unsigned int	len;
	int				*res;
	unsigned int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	res = malloc(sizeof(*res) * len);
	if (res == 0)
	{
		*range = 0;
		return (-1);
	}
	i = 0;
	while (i < len)
	{
		res[i] = min + i;
		i++;
	}
	*range = res;
	return (len);
}
