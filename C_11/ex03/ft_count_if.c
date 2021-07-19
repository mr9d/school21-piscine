int	ft_count_if (char **tab, int length, int(*f)(char*))
{
	int	i;
	int	res;

	if (tab == 0)
		return (0);
	i = 0;
	res = 0;
	while (i < length)
	{
		if (f(tab[i]))
			res++;
		i++;
	}
	return (res);
}
