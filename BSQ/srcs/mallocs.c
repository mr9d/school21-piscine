/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mallocs.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fproto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 18:33:32 by fproto            #+#    #+#             */
/*   Updated: 2021/07/13 21:25:15 by fproto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdlib.h>

char	**malloc_char_map(int height, int width)
{
	char	**res;
	int		i;

	res = 0;
	res = malloc(sizeof(*res) * height);
	if (res == 0)
		return (0);
	i = 0;
	while (i < height)
		res[i++] = 0;
	i = 0;
	while (i < height)
	{
		res[i] = malloc(sizeof(*(res[i])) * width);
		if (res[i] == 0)
		{
			free_matrix((void **)res, height);
			return (0);
		}
		i++;
	}
	return (res);
}

int	**malloc_int_map(int height, int width)
{
	int	**res;
	int	i;

	res = 0;
	res = malloc(sizeof(*res) * height);
	if (res == 0)
		return (0);
	i = 0;
	while (i < height)
		res[i++] = 0;
	i = 0;
	while (i < height)
	{
		res[i] = malloc(sizeof(*(res[i])) * width);
		if (res[i] == 0)
		{
			free_matrix((void **)res, height);
			return (0);
		}
		i++;
	}
	return (res);
}

t_field	*empty_field(void)
{
	t_field	*res;

	res = 0;
	res = malloc(sizeof(*res));
	if (res == 0)
		return (0);
	res->map = 0;
	res->matrix = 0;
	return (res);
}

t_field	*malloc_field_matrix(t_field *field)
{
	field->matrix = malloc_int_map(field->h, field->w);
	if (field->matrix == 0)
		return (0);
	return (field);
}
