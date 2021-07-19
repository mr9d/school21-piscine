#include "rush_02.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int	count_char(char *str, int limit, char ch)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (i < limit)
	{
		if (str[i] == ch)
			res++;
		i++;
	}
	return (res);
}

int	count_lines(char	*filename)
{
	int		res;
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	ret = 1;
	res = 0;
	while (ret > 0)
	{
		ret = read(fd, buf, BUF_SIZE);
		res += count_char(buf, ret, '\n');
	}
	if (close(fd) < 0)
		return (0);
	return (res);
}

void	zero_lines(char **lines, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		lines[i] = 0;
		i++;
	}
}

void	free_lines(char **lines, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (lines[i] != 0)
			free(lines[i]);
		i++;
	}
	if (lines != 0)
		free(lines);
}
