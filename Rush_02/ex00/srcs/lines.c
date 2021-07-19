#include "rush_02.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void	malloc_lines_2(char ch, char ***lines, int *line_len)
{
	if (ch == '\n')
	{
		**lines = malloc(sizeof(***lines) * (*line_len + 1));
		(*lines)++;
		*line_len = 0;
	}
	else
	{
		(*line_len)++;
	}
}

char	**malloc_lines(char	**lines, char	*filename)
{
	int		fd;
	int		ret;
	int		i;
	int		line_len;
	char	buf[BUF_SIZE];

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	ret = 1;
	line_len = 0;
	while (ret > 0)
	{
		ret = read(fd, buf, BUF_SIZE);
		i = 0;
		while (i < ret)
			malloc_lines_2 (buf[i++], &lines, &line_len);
	}
	if (close(fd) < 0)
		return (0);
	return (lines);
}

void	read_lines_2(char ch, char	***lines, int *line_len)
{
	char	*line;

	line = **lines;
	if (ch == '\n')
	{
		line[*line_len] = '\0';
		*line_len = 0;
		(*lines)++;
	}
	else
	{
		line[*line_len] = ch;
		(*line_len)++;
	}
}

char	**read_lines(char **lines, char *filename)
{
	int		fd;
	int		ret;
	int		i;
	int		line_len;
	char	buf[BUF_SIZE];

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	ret = 1;
	line_len = 0;
	while (ret > 0)
	{
		ret = read(fd, buf, BUF_SIZE);
		i = 0;
		while (i < ret)
			read_lines_2 (buf[i++], &lines, &line_len);
	}
	if (close(fd) < 0)
		return (0);
	return (lines);
}
