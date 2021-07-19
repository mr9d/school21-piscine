#include <stdio.h>
#include "../srcs/rush_02.h"

t_dict	*parse_dict (char	*filename);

int	main (void)
{
	char	*filename;
	t_dict	*dict;

	filename = "numbers.dict";
	dict = parse_dict(filename);
	return (0);
}
