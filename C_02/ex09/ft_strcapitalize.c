char	*ft_strcapitalize (char *str)
{
	int	i;
	int	ws;

	i = 0;
	ws = 1;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			ws = 1;
		else
		{
			if (ws && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
			if (!ws && str[i] >= 'A' && str[i] <= 'Z')
				str[i] += 32;
			ws = 0;
		}
		i++;
	}
	return (str);
}
