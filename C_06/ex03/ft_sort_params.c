#include <unistd.h>

void	ft_putstr (char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}

int	ft_strcmp (char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		if (s2[i] > s1[i])
			return (-1);
		i++;
	}
	if (s1[i] != '\0')
		return (1);
	if (s2[i] != '\0')
		return (-1);
	return (0);
}

void	ft_strarrsort (char **strarr, int len)
{
	int		i;
	int		move;
	char	*bkt;

	move = 1;
	while (move)
	{
		move = 0;
		i = 0;
		while (i < len - 1)
		{
			if (ft_strcmp(strarr[i], strarr[i + 1]) > 0)
			{
				bkt = strarr[i];
				strarr[i] = strarr[i + 1];
				strarr[i + 1] = bkt;
				move = 1;
			}
			i++;
		}
	}
}

int	main (int argc, char **argv)
{
	int	i;

	i = 1;
	ft_strarrsort(argv + 1, argc - 1);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		write(1, "\n", 1);
		i++;
	}
}
