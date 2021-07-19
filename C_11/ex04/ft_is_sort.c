int	direction (int cmp)
{
	if (cmp == 0)
		return (0);
	if (cmp > 0)
		return (1);
	return (-1);
}

int	ft_is_sort (int *tab, int length, int(*f)(int, int))
{
	int	i;
	int	order;
	int	o;

	if (tab == 0)
		return (0);
	if (length < 3)
		return (1);
	order = 0;
	i = 1;
	while (i < length)
	{
		o = direction(f(tab[i - 1], tab[i]));
		if (order == 0)
			order = o;
		else
			if (o != 0 && order != o)
				return (0);
		i++;
	}
	return (1);
}
