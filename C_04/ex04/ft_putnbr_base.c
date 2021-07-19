#include <unistd.h>

void	ft_putchar (char c)
{
	write(1, &c, 1);
}

int	base_has_eq(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
		{
			return (1);
		}
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	get_base_num (char *base)
{
	int	i;

	if (base_has_eq(base))
	{
		return (0);
	}
	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	ft_putnbr_base_rc (int nb, char *base, int base_num)
{
	int	div;

	if (nb == 0)
	{
		ft_putchar(base[0]);
		return ;
	}
	div = nb / base_num;
	if (div != 0)
		ft_putnbr_base_rc(div, base, base_num);
	if (nb > 0)
		ft_putchar(base[nb % base_num]);
	else
		ft_putchar(base[-nb % base_num]);
}

void	ft_putnbr_base (int nbr, char *base)
{
	int	base_num;

	base_num = get_base_num(base);
	if (base_num < 2)
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
	}
	ft_putnbr_base_rc(nbr, base, base_num);
}
