#include "rush_02.h"

void	output4(char *str, int c, t_dict *nbr, int pre_space)
{
	int	h;
	int	k;

	k = 1;
	if (ft_strlen(str) == 2)
		k = 0;
	if (ft_strlen(str) != 1 && str[k + 1] == '0')
		c -= 1;
	if (c == 1)
	{
		if (ft_strlen(str) == 1)
			h = str[0] - '0';
		else
			h = str[k + 1] - '0';
		if (pre_space)
			ft_putchar(' ');
		ft_putstr(nbr->nums9[h]);
		c -= 1;
	}
}

void	output2(char *str, int c, t_dict *nbr, int pre_space)
{
	int	h;
	int	k;

	k = 1;
	if (ft_strlen(str) == 2)
		k = 0;
	if (c == 2 && str[k] == '1')
	{
		h = str[k + 1] - '0';
		if (pre_space)
			ft_putchar(' ');
		ft_putstr(nbr->nums19[h]);
		c -= 2;
	}
	output4(str, c, nbr, pre_space);
}

void	output3(char *str, int c, t_dict *nbr, int pre_space)
{
	int	k;
	int	h;

	k = 1;
	if (ft_strlen(str) == 2)
		k = 0;
	if (c == 2 && str[k] != '1')
	{
		if (str[k] == '0')
			c -= 1;
		else
		{
			h = str[k] - '0';
			if (pre_space)
				ft_putchar(' ');
			ft_putstr(nbr->nums90[h - 2]);
			c -= 1;
			pre_space = 1;
		}
	}
	output2(str, c, nbr, pre_space);
}

void	output(char *str, t_dict *nbr, int pre_space)
{
	int	h;
	int	c;
	int	k;

	k = 1;
	c = ft_strlen(str);
	if (c == 2)
		k = 0;
	if (c == 3 && str[0] == '0')
		c -= 1;
	else if (c == 3)
	{
		h = str[0] - '0';
		if (str[0] == '0')
			c -= 1;
		if (pre_space)
			ft_putchar(' ');
		ft_putstr(nbr->nums9[h]);
		ft_putchar(' ');
		ft_putstr(nbr->num100);
		c -= 1;
		pre_space = 1;
	}
	output3(str, c, nbr, pre_space);
}
