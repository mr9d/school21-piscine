#include "rush_02.h"

int	get_pow1000(char *number)
{
	int	i;

	if (number[0] != '1')
		return (0);
	i = 1;
	while (number[i] != '\0')
	{
		if (number[i] != '0')
			return (0);
		i++;
	}
	if ((i - 1) % 3 != 0)
		return (0);
	if (i < 4)
		return (0);
	return ((i - 1) / 3);
}

int	get_pow1000_max(char **lines, int lines_count)
{
	char	*number;
	char	*printable;
	int		i;
	int		max;
	int		p;

	number = 0;
	printable = 0;
	max = 0;
	i = 0;
	while (i < lines_count)
	{
		parse_line(lines[i], &number, &printable);
		p = get_pow1000(number);
		if (p > max)
			max = p;
		free_str(number);
		free_str(printable);
		i++;
	}
	return (max);
}
