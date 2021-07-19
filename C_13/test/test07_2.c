#include <stdio.h>

void	af (void *item, int current_level, int is_first_elem)
{
	int	i;

	i = *(int *)item;
	printf("Level %d | Item: %d", current_level, i);
	if (is_first_elem)
		printf(" (first)");
	printf("\n");
}

int	cmp (void *v1, void *v2)
{
	int	i1;
	int	i2;

	i1 = *(int *)v1;
	i2 = *(int *)v2;
	return (i1 - i2);
}
