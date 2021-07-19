#include <stdio.h>

int	ft_atoi (char *str);

void	test (char *str)
{
	printf("\"%s\": %d\n", str, ft_atoi(str));
}

int	main (void)
{
	test(" ---+--+1234ab567");
	test("  \t      23423");
	test("  \n      23423");
	test("  \v      23423");
	test("");
	test("     ");
	test("    asd");
	test("123");
	test("456-+--");
	test("-+-+-asdasd123");
	test("    --123");
	test("-001212aqwe+123");
	return (0);
}
