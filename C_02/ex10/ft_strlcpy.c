unsigned int	ft_strlcpy (char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srcLen;

	srcLen = 0;
	while (src[srcLen] != '\0')
	{
		srcLen++;
	}
	if (size == 0)
	{
		return (srcLen);
	}
	i = 0;
	while (dest[i] != '\0' && src[i] != '\0' && i + 1 < size)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (srcLen);
}
