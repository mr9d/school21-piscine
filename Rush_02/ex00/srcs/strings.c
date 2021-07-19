int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*(str++) != '\0')
		count++;
	return (count);
}
