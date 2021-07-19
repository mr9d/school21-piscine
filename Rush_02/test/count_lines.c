#include <stdio.h>

int	count_lines (char	*filename);

int	main (void)
{
	char	*filename;
	int		lines;

	filename = "numbers.dict";
	lines = count_lines(filename);
	printf("Lines in file \"%s\": %d\n", filename, lines);
	return (0);
}
