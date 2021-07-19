int	no_null_chars_eq (char *s1, char *s2, int p1, int p2)
{
	return (s1[p1] != '\0' && s2[p2] != '\0' && s1[p1] == s2[p2]);
}

char	*ft_strstr (char *str, char *to_find)
{
	int	i;
	int	j;

	if (*to_find == '\0')
	{
		return (str);
	}
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while (no_null_chars_eq(str, to_find, i + j, j))
			{
				j++;
			}
			if (to_find[j] == '\0')
			{
				return (&str[i]);
			}
		}
		i++;
	}
	return (0);
}
