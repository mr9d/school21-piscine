/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_field.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fproto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:48:54 by fproto            #+#    #+#             */
/*   Updated: 2021/07/14 17:15:05 by fproto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int	read_nt(int fd, char *buf, int bs)
{
	int	rb;

	rb = read(fd, buf, bs);
	buf[rb] = '\0';
	return (rb);
}

t_field	*parse_field_fd(int fd, t_field *field, int line_num, int line_pos)
{
	int		line1_len;
	char	buf[BUF_SIZE + 1];
	int		rb;

	rb = read_nt(fd, buf, BUF_SIZE);
	if (rb <= 0)
		return (0);
	line1_len = parse_first_line(buf, field);
	if (line1_len == 0)
		return (0);
	if (buf[line1_len + 1] != '\0')
		if (parse_other_line(buf + line1_len + 1, field,
				&line_num, &line_pos) == 0)
			return (0);
	rb = read_nt(fd, buf, BUF_SIZE);
	while (rb > 0)
	{
		if (parse_other_line(buf, field, &line_num, &line_pos) == 0)
			return (0);
		rb = read_nt(fd, buf, BUF_SIZE);
	}
	if (line_num != field->h)
		return (0);
	return (field);
}

t_field	*parse_field(char *filename)
{
	int		fd;
	t_field	*res;
	t_field	*field;

	fd = 0;
	res = 0;
	if (filename != 0)
	{
		fd = open(filename, O_RDONLY);
		if (fd < 0)
			return (0);
	}
	field = empty_field();
	if (field)
		res = parse_field_fd(fd, field, 0, 0);
	if (res)
		res = malloc_field_matrix(field);
	if (fd > 0 && close(fd) < 0)
		res = 0;
	if (res == 0)
		free_field(field);
	return (res);
}
