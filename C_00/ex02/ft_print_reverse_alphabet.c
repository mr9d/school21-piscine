#include <unistd.h>

void	ft_print_reverse_alphabet (void)
{
	unsigned char	c;

	c = 122;
	while (c > 96)
	{
		write(1, &c, 1);
		c--;
	}
}
