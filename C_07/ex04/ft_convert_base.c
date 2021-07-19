#include <stdlib.h>
#include <unistd.h>

int	base_has_eq (char *base);

int	ft_atoi_base (char *str, char *base);

int	get_base_num (char *base);

void	ft_putnbr_base_rc (int nb, char *base, int base_num, char **c)
{
	int	div;

	if (nb == 0)
	{
		**c = (base[0]);
		*c = *c + 1;
		return ;
	}
	div = nb / base_num;
	if (div != 0)
		ft_putnbr_base_rc(div, base, base_num, c);
	if (nb > 0)
	{
		**c = base[nb % base_num];
		*c = *c + 1;
	}
	else
	{
		**c = base[-nb % base_num];
		*c = *c + 1;
	}
}

void	ft_putnbr_base (int nbr, char *base, char *res)
{
	int		base_num;
	char	*c;
	char	**c_ptr;

	base_num = get_base_num(base);
	if (base_num < 2)
		return ;
	c = res;
	c_ptr = &c;
	if (nbr < 0)
	{
		*c = '-';
		c = c + 1;
	}
	ft_putnbr_base_rc(nbr, base, base_num, c_ptr);
	*c = '\0';
}

char	*ft_convert_base (char *nbr, char *base_from, char *base_to)
{
	int		n;
	char	*res;

	if (base_has_eq(base_from) || base_has_eq(base_to))
		return (0);
	if (get_base_num(base_from) < 2 || get_base_num(base_to) < 2)
		return (0);
	n = ft_atoi_base(nbr, base_from);
	res = malloc(sizeof(*res) * 44);
	if (res == 0)
		return (0);
	ft_putnbr_base(n, base_to, res);
	return (res);
}
