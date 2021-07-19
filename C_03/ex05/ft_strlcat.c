unsigned int	ft_strlcat (char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	if (size == 0)
	{
		j = 0;
		while (src[j] != '\0')
			j++;
		return (j);
	}
	i = 0;
	while (dest[i] != '\0' && i < size - 1)
		i++;
	if (i == size - 1)
		return (size);
	j = 0;
	while (src[j] != '\0' && i + j < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	while (src[j] != '\0')
		j++;
	return (i + j);
}
