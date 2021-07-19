#include <stdlib.h>

unsigned int	ft_strlen (char *str)
{
	unsigned int	count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

void	append_and_move	(char **dst, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		**dst = src[i];
		*dst = *dst + 1;
		i++;
	}
	**dst = '\0';
}

char	*ft_strjoin (int size, char **strs, char *sep)
{
	int				i;
	unsigned int	res_len;
	char			*res;
	char			*c;

	if (size == 0)
		return ("");
	i = 0;
	res_len = 0;
	while (i < size)
		res_len += ft_strlen(strs[i++]);
	res_len += ft_strlen(sep) * (size - 1) + 1;
	res = malloc(sizeof(*res) * res_len);
	if (res == 0)
		return ("");
	i = 0;
	c = res;
	while (i < size)
	{
		append_and_move(&c, strs[i]);
		if (i < size - 1)
			append_and_move(&c, sep);
		i++;
	}
	return (res);
}
