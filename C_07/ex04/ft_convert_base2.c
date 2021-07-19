int	is_space_char (char c)
{
	if (c == ' ' || c == '\t')
	{
		return (1);
	}
	return (c == '\n' || c == '\v' || c == '\f' || c == '\r');
}

int	base_has_eq(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || is_space_char(base[i]))
		{
			return (1);
		}
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	get_base_num (char *base)
{
	int	i;

	if (base_has_eq(base))
	{
		return (0);
	}
	i = 0;
	while (base[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	get_chr_pos (char *base, char chr)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == chr)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base (char *str, char *base)
{
	int	i;
	int	sign;
	int	res;
	int	chr_pos;
	int	base_num;

	base_num = get_base_num(base);
	if (base_num < 2)
		return (0);
	res = 0;
	sign = 1;
	i = 0;
	while (is_space_char(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			sign *= -1;
	chr_pos = get_chr_pos(base, str[i]);
	while (chr_pos != -1 && str[i] != '\0')
	{
		res = res * base_num + chr_pos;
		i++;
		chr_pos = get_chr_pos(base, str[i]);
	}
	return (sign * res);
}
