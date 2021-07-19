/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checks.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mragwyle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 17:55:03 by mragwyle          #+#    #+#             */
/*   Updated: 2021/07/04 17:55:06 by mragwyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "boxes.h"
#include <stdlib.h>

char	check_has_duplicates (t_field field, int pos, char box)
{
	int	i;

	i = pos - 4;
	while (i >= 0)
	{
		if (field[i] == box)
			return (1);
		i -= 4;
	}
	i = pos - 1;
	while (i >= (pos / 4) * 4)
	{
		if (field[i] == box)
			return (1);
		i -= 1;
	}
	return (0);
}

char	check_hor_rules (t_field field, t_rules rules, int pos, char box)
{
	char	left;
	char	right;
	char	*line;

	left = rules[pos / 4 + 8];
	right = rules[pos / 4 + 12];
	line = malloc(sizeof(*line) * 4);
	line[0] = field[pos - 3];
	line[1] = field[pos - 2];
	line[2] = field[pos - 1];
	line[3] = box;
	if (get_left(line) != left)
		return (0);
	if (get_right(line) != right)
		return (0);
	free(line);
	return (1);
}

char	check_ver_rules (t_field field, t_rules rules, int pos, char box)
{
	char	up;
	char	down;
	char	*line;

	up = rules[pos % 4];
	down = rules[pos % 4 + 4];
	line = malloc(sizeof(*line) * 4);
	line[0] = field[pos % 4];
	line[1] = field[pos % 4 + 4];
	line[2] = field[pos % 4 + 8];
	line[3] = box;
	if (get_left(line) != up)
		return (0);
	if (get_right(line) != down)
		return (0);
	return (1);
}

char	check_follow_rules (t_field field, t_rules rules, int pos, char box)
{
	if (pos % 4 == 3)
	{
		if (!check_hor_rules(field, rules, pos, box))
			return (0);
	}
	if (pos > 11)
	{
		if (!check_ver_rules(field, rules, pos, box))
			return (0);
	}
	return (1);
}

char	check_able_to_place (t_field field, t_rules rules, int pos, char box)
{
	if (check_has_duplicates(field, pos, box))
		return (0);
	if (check_follow_rules(field, rules, pos, box))
		return (1);
	else
		return (0);
}
