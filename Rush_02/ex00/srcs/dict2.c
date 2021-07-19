#include "rush_02.h"
#include <stdlib.h>

char	**zero_arr_str(char ***str, int len)
{
	int	i;

	*str = malloc(sizeof(**str) * len);
	if (*str == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		(*str)[i] = 0;
		i++;
	}
	return (*str);
}

void	free_arr_str(char **str, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (str[i] != 0)
			free(str[i]);
		i++;
	}
	free(str);
}

t_dict	*zero_dict(t_dict *dict, int pow1000_len)
{
	dict->nums9 = 0;
	dict->nums19 = 0;
	dict->nums90 = 0;
	dict->num100 = 0;
	dict->pow1000 = 0;
	dict->pow1000_len = pow1000_len;
	zero_arr_str(&(dict->nums9), 10);
	zero_arr_str(&(dict->nums19), 10);
	zero_arr_str(&(dict->nums90), 8);
	zero_arr_str(&(dict->pow1000), pow1000_len);
	if (dict->nums9 == 0 || dict->nums19 == 0
		|| dict->nums90 == 0 || dict->pow1000 == 0)
		return (0);
	return (dict);
}

void	free_dict(t_dict *dict)
{
	if (dict->nums9 != 0)
		free_arr_str(dict->nums9, 10);
	if (dict->nums19 != 0)
		free_arr_str(dict->nums19, 10);
	if (dict->nums90 != 0)
		free_arr_str(dict->nums90, 8);
	if (dict->num100 != 0)
		free(dict->num100);
	if (dict->pow1000 != 0)
		free_arr_str(dict->pow1000, dict->pow1000_len);
	free(dict);
}
