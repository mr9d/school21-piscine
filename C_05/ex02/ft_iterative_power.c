int	ft_iterative_power (int nb, int power)
{
	int	res;

	if (power < 0)
		return (0);
	res = (1);
	while (power-- > 0)
		res *= nb;
	return (res);
}
