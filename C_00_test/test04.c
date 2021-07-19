#include <unistd.h>

void	ft_is_negative (int n);

int	main (void)
{
	write(1, "3 check: ", 9);
	ft_is_negative(3);
	write(1, "\n0 check: ", 10);
	ft_is_negative(0);
	write(1, "\n-3 check: ", 11);
	ft_is_negative(-3);
	write(1, "\n444444 check: ", 15);
	ft_is_negative(444444);
}
