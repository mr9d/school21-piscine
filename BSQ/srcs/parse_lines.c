/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_lines.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fproto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 18:34:54 by fproto            #+#    #+#             */
/*   Updated: 2021/07/13 21:25:49 by fproto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int	first_line_valid(char *line, int len)
{
	int	i;

	if (len < 3)
		return (0);
	if (line[len - 1] != '\n')
		return (0);
	if (line[len - 2] < ' ' || line[len - 2] > '~')
		return (0);
	if (line[len - 3] < ' ' || line[len - 3] > '~')
		return (0);
	if (line[len - 4] < ' ' || line[len - 4] > '~')
		return (0);
	if (line[len - 2] == line[len - 3] || line[len - 2] == line[len - 4]
		|| line[len - 4] == line[len - 3])
		return (0);
	i = 0;
	while (i < len - 4)
	{
		if (line[i] < '0' || line[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	map_char_valid(char ch, int line_num, int line_pos, t_field *field)
{
	if (ch == '\n')
	{
		return (line_num == 0 || line_pos == field->w);
	}
	else
	{
		if (line_num >= field->h)
			return (0);
		if (line_pos >= field->w)
			return (0);
		if (ch != field->emp && ch != field->obs)
			return (0);
	}
	return (1);
}

int	parse_first_line(char *buf, t_field *field)
{
	int		i;
	int		len;

	len = get_line_width(buf);
	if (buf[len] == '\0')
		return (0);
	if (first_line_valid(buf, len + 1))
	{
		field->emp = buf[len - 3];
		field->obs = buf[len - 2];
		field->full = buf[len - 1];
		field->w = 0;
		field->h = 0;
		i = 0;
		while (i < len - 3)
			field->h = field->h * 10 + buf[i++] - '0';
		if (field->h < 1)
			return (0);
		return (len);
	}
	return (0);
}

t_field	*parse_other_line(char *buf, t_field *field,
		int *line_num, int *line_pos)
{
	int	i;

	if (*line_num == 0)
		enlarge_field(field, get_line_width(buf));
	if (field->w == 0)
		return (0);
	i = 0;
	while (buf[i] != '\0')
	{
		if (!map_char_valid(buf[i], *line_num, *line_pos, field))
			return (0);
		if (buf[i] == '\n')
		{
			(*line_num)++;
			(*line_pos) = 0;
		}
		else
		{
			field->map[*line_num][*line_pos] = buf[i];
			(*line_pos)++;
		}
		i++;
	}
	return (field);
}
