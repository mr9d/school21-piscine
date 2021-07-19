#include "rush_02.h"

int	save_nums9(char *number, char *printable, t_dict *dict)
{
	int	pos;

	pos = number[0] - '0';
	if ((dict->nums9)[pos] != 0)
		return (0);
	(dict->nums9)[pos] = printable;
	return (1);
}

int	save_nums19_90(char *number, char *printable, t_dict *dict)
{
	int	pos;

	if (number[0] == '1')
	{
		pos = number[1] - '0';
		if ((dict->nums19)[pos] != 0)
			return (0);
		(dict->nums19)[pos] = printable;
		return (1);
	}
	else
	{
		if (number[1] != '0')
			return (0);
		pos = number[0] - '0' - 2;
		if (pos < 0)
			return (0);
		if ((dict->nums90)[pos] != 0)
			return (0);
		(dict->nums90)[pos] = printable;
		return (1);
	}
	return (0);
}

int	save_num100(char *number, char *printable, t_dict *dict)
{
	if (number[0] == '1' && number[1] == '0' && number[2] == '0')
	{
		if (dict->num100 != 0)
			return (0);
		(dict->num100) = printable;
		return (1);
	}
	return (0);
}

int	save_pow1000(char *number, char *printable, t_dict *dict)
{
	int	pow;

	pow = get_pow1000(number);
	if (pow == 0)
		return (0);
	if (dict->pow1000[pow - 1] != 0)
		return (0);
	dict->pow1000[pow - 1] = printable;
	return (1);
}

int	save_line(char *number, char *printable, t_dict *dict)
{
	if (number[0] == '\0')
		return (0);
	if (number[1] == '\0')
		return (save_nums9(number, printable, dict));
	if (number[2] == '\0')
		return (save_nums19_90(number, printable, dict));
	if (number[3] == '\0')
		return (save_num100(number, printable, dict));
	return (save_pow1000(number, printable, dict));
}
