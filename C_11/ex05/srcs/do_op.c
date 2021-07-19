#include <unistd.h>

int		ft_atoi (char *str);
void	ft_putstr (char *str);
int		sum (int a, int b);
int		sub (int a, int b);
int		mul (int a, int b);
int		div (int a, int b);
int		mod (int a, int b);

int	do_oper (char *oper, int a, int b)
{
	if (oper[0] == '\0' || oper[1] != '\0')
	{
		ft_putstr("0\n");
		return (1);
	}
	if (oper[0] == '+')
		return (sum(a, b));
	if (oper[0] == '-')
		return (sub(a, b));
	if (oper[0] == '*')
		return (mul(a, b));
	if (oper[0] == '/')
		return (div(a, b));
	if (oper[0] == '%')
		return (mod(a, b));
	ft_putstr("0\n");
	return (1);
}

int	main (int argc, char **argv)
{
	int		a;
	int		b;
	char	*oper;

	if (argc != 4)
		return (1);
	a = ft_atoi(argv[1]);
	oper = argv[2];
	b = ft_atoi(argv[3]);
	return (do_oper(oper, a, b));
}
