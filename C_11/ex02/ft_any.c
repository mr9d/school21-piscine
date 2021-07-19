int	ft_any (char **tab, int(*f)(char*))
{
	if (tab == 0)
		return (0);
	while (*tab != 0)
	{
		if (f(*tab))
			return (1);
		tab++;
	}
	return (0);
}
