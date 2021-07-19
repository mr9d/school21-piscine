void	ft_foreach (int *tab, int length, void(*f)(int))
{
	int	i;

	if (tab == 0)
		return ;
	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
