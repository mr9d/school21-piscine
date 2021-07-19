int	ft_str_is_alpha (char *str)
{
	int	i;
	int	isLower;
	int	isUpper;

	i = 0;
	while (str[i] != '\0')
	{
		isLower = str[i] >= 'a' && str[i] <= 'z';
		isUpper = str[i] >= 'A' && str[i] <= 'Z';
		if (!isLower && !isUpper)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
