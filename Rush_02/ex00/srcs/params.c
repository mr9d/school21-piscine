#include "rush_02.h"

int	parse_params(int argc, char **argv, char **number, char**filename)
{
	if (argc < 2 || argc > 3)
		return (0);
	if (argc == 2)
	{
		*filename = DEFAULT_FILENAME;
		*number = argv[1];
		return (1);
	}
	*filename = argv[1];
	*number = argv[2];
	return (1);
}

int	valid_uns_int(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (i > 0);
}
