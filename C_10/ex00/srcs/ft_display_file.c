#include "ft_display_file.h"
#include "ft_console.h"
#include <unistd.h>
#include <fcntl.h>

char	*get_file_name (int argc, char **argv)
{
	if (argc < 2)
	{
		ft_puterr(ERR_MISS_MSG);
		return (0);
	}
	if (argc > 2)
	{
		ft_puterr(ERR_ARG_MSG);
		return (0);
	}
	return (argv[1]);
}

char	display_file (char *file_name)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(file_name, O_RDONLY);
	if (fd < 0)
	{
		ft_puterr(ERR_READ_MSG);
		return (1);
	}
	ret = 1;
	while (ret > 0)
	{
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) < 0)
	{
		ft_puterr(ERR_READ_MSG);
		return (1);
	}
	return (0);
}

int	main (int argc, char **argv)
{
	char	*file_name;

	file_name = get_file_name(argc, argv);
	if (file_name == 0)
		return (1);
	if (display_file(file_name) != 0)
		return (1);
	return (0);
}
