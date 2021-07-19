#include <unistd.h>

void	ft_print_comb (void)
{
	unsigned char	a;
	unsigned char	b;
	unsigned char	c;

	a = 48;
	while (a < 58)
	{
		b = a + 1;
		while (b < 58)
		{
			c = b + 1;
			while (c < 58)
			{
				if (!(a == 48 && b == 49 && c == 50))
					write(1, ", ", 2);
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				c++;
			}
			b++;
		}
		a++;
	}
}
