#include <stdio.h>

void	ft_ultimate_ft (int *********nbr);

int	main(void)
{
	int	*********a;
	int ********a1;
	int *******a2;
	int ******a3;
	int *****a4;
	int ****a5;
	int ***a6;
	int **a7;
	int *a8;
	int a9;

	a9 = 5;
	a8 = &a9;
	a7 = &a8;
	a6 = &a7;
	a5 = &a6;
	a4 = &a5;
	a3 = &a4;
	a2 = &a3;
	a1 = &a2;
	a = &a1;
	
	ft_ultimate_ft(a);
	printf("%d", *********a);
	return (0);
}
