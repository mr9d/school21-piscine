#include "rush_02.h"

int	number_printable(char *number, t_dict *dict)
{
	int	len;
	int	i;

	len = ft_strlen(number);
	i = 1;
	while (i < segments_count(len))
	{
		if (!segment_zero(number, len, i))
			if (dict->pow1000_len < i || dict->pow1000[i - 1] == 0)
				return (0);
		i++;
	}
	return (1);
}

int	ft_allzero(char *argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		if (argv[i] != '0')
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_dict	*dict;
	char	*filename;
	char	*number;

	if (parse_params(argc, argv, &number, &filename) == 0
		|| !valid_uns_int(number))
	{
		ft_puterr(ERROR_MSG);
		return (1);
	}
	dict = parse_dict(filename);
	if (dict == 0 || !number_printable(number, dict))
	{
		ft_puterr(ERROR_DICT_MSG);
		return (1);
	}
	if (ft_allzero(argv[1]) == 1)
		ft_putstr(dict->nums9[0]);
	ft_a2(number, dict, 0);
	ft_putchar('\n');
	free_dict(dict);
	return (0);
}
