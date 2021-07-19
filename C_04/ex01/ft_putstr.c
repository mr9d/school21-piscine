#include <unistd.h>

void	ft_putstr (char *str)
{
	char	*c;

	c = str;
	while (*c != '\0')
	{
		write(1, c, 1);
		c++;
	}
}
