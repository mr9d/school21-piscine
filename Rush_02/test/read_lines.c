#include <stdio.h>
#include <stdlib.h>

char	**read_lines (char **lines, char *filename);
char	**malloc_lines (char **lines, char *filename);
int		count_lines (char	*filename);

int	main (void)
{
	char	*filename;
	char	**lines;
	int		i;
	int		len;

	filename = "numbers.dict";
	len = count_lines(filename);
	printf("Lines: %d\n", len);
	lines = malloc(sizeof(*lines) * len);
	malloc_lines(lines, filename);
	read_lines(lines, filename);
	i = 0;
	while (i < len)
	{
		printf("%s\n", lines[i]);
		i++;
	}
	return (0);
}
