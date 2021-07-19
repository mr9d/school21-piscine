#include "rush_02.h"
#include <stdlib.h>

int	check_line_valid(char *line)
{
	int	i;

	i = 0;
	if (line[i] == '\0')
		return (1);
	if (line[i] < '0' && line[i] > '9')
		return (0);
	while (line[i] >= '0' && line[i] <= '9')
		i++;
	if (line[i] != ' ' && line[i] != ':')
		return (0);
	while (line[i] == ' ')
		i++;
	if (line[i] != ':')
		return (0);
	i++;
	while (line[i] == ' ')
		i++;
	if (line[i] < ' ' || line[i] > '~')
		return (0);
	while (line[i] >= ' ' && line[i] <= '~')
		i++;
	return (line[i] == '\0');
}

int	check_lines_valid(char **lines, int lines_count)
{
	int	i;

	i = 0;
	while (i < lines_count)
	{
		if (!check_line_valid(lines[i]))
			return (0);
		i++;
	}
	return (1);
}

char	*substr(char *str, int begin, int len)
{
	char	*res;
	int		i;

	res = malloc(sizeof(*res) * (len + 1));
	i = 0;
	while (i < len)
	{
		res[i] = str[i + begin];
		i++;
	}
	res[i] = '\0';
	return (res);
}

int	parse_line(char *line, char **number, char **printable)
{
	int	n_len;
	int	p_begin;
	int	p_len;

	n_len = 1;
	while (line[n_len] >= '0' && line[n_len] <= '9')
		n_len++;
	p_begin = n_len;
	while (line[p_begin] != ':')
		p_begin++;
	p_begin++;
	while (line[p_begin] == ' ')
		p_begin++;
	p_len = 1;
	while (line[p_begin + p_len] != '\0')
		p_len++;
	*number = substr(line, 0, n_len);
	*printable = substr(line, p_begin, p_len);
	return (*number && *printable);
}

void	free_str(char *str)
{
	if (str != 0)
		free(str);
}
