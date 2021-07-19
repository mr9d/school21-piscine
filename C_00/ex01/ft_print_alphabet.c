#include <unistd.h>

void	ft_print_alphabet (void)
{
	unsigned char	c;

	c = 97;
	while (c < 123)
	{
		write(1, &c, 1);
		c++;
	}
}
