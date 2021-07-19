#include <stdlib.h>

unsigned int	ft_strlen (char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

char	*ft_strdup (char *src)
{
	char			*dst;
	unsigned int	len;
	unsigned int	i;

	if (src == 0)
		return (0);
	len = ft_strlen(src);
	dst = malloc(len + 1);
	if (dst == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
