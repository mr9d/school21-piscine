#include <stdlib.h>

int	*ft_range (int min, int max)
{
	unsigned int	len;
	int				*res;
	unsigned int	i;

	if (min >= max)
		return (0);
	len = max - min;
	res = malloc(sizeof(*res) * len);
	if (res == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		res[i] = min + i;
		i++;
	}
	return (res);
}
