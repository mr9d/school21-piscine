/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_lines.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fproto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 18:34:54 by fproto            #+#    #+#             */
/*   Updated: 2021/07/13 21:28:10 by fproto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdlib.h>

void	copy_map(char **src, char **dest, int height, int width)
{
	int	i;
	int	j;

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			dest[i][j] = src[i][j];
			j++;
		}
		i++;
	}
}

int	get_line_width(char *buf)
{
	int	w;

	w = 0;
	while (buf[w] != '\n' && buf[w] != '\0')
		w++;
	return (w);
}

t_field	*enlarge_field(t_field *field, int width)
{
	char	**new_map;

	if (width == 0)
		return (field);
	new_map = malloc_char_map(field->h, field->w + width);
	if (new_map == 0)
		return (0);
	if (field->map != 0)
		copy_map(field->map, new_map, field->h, field->w);
	free_matrix((void **)field->map, field->h);
	field->map = new_map;
	field->w += width;
	return (field);
}
