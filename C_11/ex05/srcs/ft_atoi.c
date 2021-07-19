int	is_space_char (char c)
{
	if (c == ' ' || c == '\t')
	{
		return (1);
	}
	return (c == '\n' || c == '\v' || c == '\f' || c == '\r');
}

int	ft_atoi (char *str)
{
	int	i;
	int	sign;
	int	res;

	res = 0;
	sign = 1;
	i = 0;
	while (is_space_char(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 - 48 + str[i];
		i++;
	}
	return (sign * res);
}
