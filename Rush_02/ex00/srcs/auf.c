#include "rush_02.h"
char	*ft_ddd(int i, t_dict *nbr)
{
	int	t;

	t = (i / 3) - 1;
	if (i % 3 == 0)
	{
		t = t - 1;
		return (nbr->pow1000[t]);
	}
	else
		return (nbr->pow1000[t]);
}

char	*ft_strm(char *argv, int i, char *room)
{
	if (i % 3 == 0)
	{
		room[0] = argv[0];
		room[1] = argv[1];
		room[2] = argv[2];
		room[3] = '\0';
	}
	if (i % 3 == 1)
	{
		room[0] = argv[0];
		room[1] = '\0';
	}
	if (i % 3 == 2)
	{
		room[0] = argv[0];
		room[1] = argv[1];
		room[2] = '\0';
	}
	return (room);
}

void	ft_mmm(char *argv, int i, t_dict *nbr, int pre_space)
{
	int		j;
	int		t;
	char	s[4];

	j = 0;
	t = i % 3;
	if (t == 0)
		t = 3;
	ft_a2(ft_strm(argv, i, s), nbr, pre_space);
	while (argv[t] && i % 3 == 0)
		argv[j++] = argv[t++];
	while (argv[t] && i % 3 == 1)
		argv[j++] = argv[t++];
	while (argv[t] && i % 3 == 2)
		argv[j++] = argv[t++];
	argv[j] = argv[t];
	ft_putchar(' ');
	ft_putstr(ft_ddd(i, nbr));
	ft_a2(argv, nbr, 1);
}

char	*ft_checkzero(char *argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[i] == '0')
		i++;
	while (argv[i])
	{
		argv[j] = argv[i];
		i++;
		j++;
	}
	argv[j] = '\0';
	return (argv);
}

void	ft_a2(char *argv, t_dict *nbr, int pre_space)
{
	int	i;

	i = ft_strlen(ft_checkzero(argv));
	if (i > 3)
	{
		ft_mmm(ft_checkzero(argv), i, nbr, pre_space);
	}
	else if (i > 0)
		output(ft_checkzero(argv), nbr, pre_space);
}
