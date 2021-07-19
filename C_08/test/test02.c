#include "../ex02/ft_abs.h"
#include <stdio.h>

int	main (void)
{
	printf("%d -> %d\n", 12, ABS(12));
	printf("%d -> %d\n", -12, ABS(-12));
	printf("%d -> %d\n", 0, ABS(0));
	printf("%d -> %d\n", -1, ABS(-1));
	return (0);
}
