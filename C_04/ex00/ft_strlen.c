#include <unistd.h>

int	ft_strlen (char *str)
{
	unsigned int	count;
	char			*c;

	count = 0;
	c = str;
	while (*c != '\0')
	{
		count++;
		c++;
	}
	return (count);
}
