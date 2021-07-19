void	ft_putstr (char *str);
void	ft_putnbr (int nb);

int	sum (int a, int b)
{
	ft_putnbr(a + b);
	ft_putstr("\n");
	return (1);
}

int	sub (int a, int b)
{
	ft_putnbr(a - b);
	ft_putstr("\n");
	return (1);
}

int	mul (int a, int b)
{	
	ft_putnbr(a * b);
	ft_putstr("\n");
	return (1);
}

int	div (int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : division by zero");
	else
		ft_putnbr(a / b);
	ft_putstr("\n");
	return (1);
}

int	mod (int a, int b)
{
	if (b == 0)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(a % b);
	ft_putstr("\n");
	return (1);
}
