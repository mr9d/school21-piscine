#include "rush_02.h"
#include <stdlib.h>
#include <stdio.h>

void	print_arr(char **arr, int len)
{
	int	i;

	if (arr == 0 || len < 0)
	{
		printf("(null)");
		return ;
	}
	printf("[");
	i = 0;
	while (i < len)
	{
		printf("%s", arr[i]);
		if (i < len - 1)
			printf(", ");
		i++;
	}
	printf("]\n");
}

void	print_dict(t_dict *dict)
{
	printf("Dictionary:\n");
	printf("Nums9:\n");
	print_arr(dict->nums9, 10);
	printf("Nums19:\n");
	print_arr(dict->nums19, 10);
	printf("Nums90:\n");
	print_arr(dict->nums90, 8);
	printf("Num100:\n");
	printf("%s\n", dict->num100);
	printf("Pow1000:\n");
	print_arr(dict->pow1000, dict->pow1000_len);
	printf("Pow1000_len: %d\n", dict->pow1000_len);
}

t_dict	*parse_dict_line(t_dict *dict, char *line)
{
	char	*number;
	char	*printable;
	int		used;

	number = 0;
	printable = 0;
	if (parse_line(line, &number, &printable) == 0)
	{
		free_str(number);
		free_str(printable);
		return (0);
	}
	used = save_line(number, printable, dict);
	if (used == 0)
		free(printable);
	free(number);
	return (dict);
}

t_dict	*parse_dict_lines(char **lines, int lines_count)
{
	t_dict	*res;
	int		i;
	int		pow1000_max;

	if (!check_lines_valid(lines, lines_count))
		return (0);
	pow1000_max = get_pow1000_max(lines, lines_count);
	res = 0;
	res = malloc(sizeof(*res));
	if (res == 0)
		return (0);
	if (zero_dict(res, pow1000_max) == 0)
	{
		free_dict(res);
		return (0);
	}
	i = 0;
	while (i < lines_count)
	{
		parse_dict_line(res, lines[i]);
		i++;
	}
	return (res);
}

t_dict	*parse_dict(char *filename)
{
	int		lines_count;
	char	**lines;
	t_dict	*res;

	lines_count = count_lines(filename);
	if (lines_count <= 0)
		return (0);
	lines = 0;
	lines = malloc(sizeof(*lines) * lines_count);
	if (lines == 0)
		return (0);
	zero_lines(lines, lines_count);
	if (malloc_lines(lines, filename) == 0)
	{
		free_lines(lines, lines_count);
		return (0);
	}
	if (read_lines(lines, filename) == 0)
	{
		free_lines(lines, lines_count);
		return (0);
	}
	res = parse_dict_lines(lines, lines_count);
	free_lines(lines, lines_count);
	return (res);
}
