/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boxes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mragwyle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 17:54:39 by mragwyle          #+#    #+#             */
/*   Updated: 2021/07/04 17:54:43 by mragwyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "boxes.h"

t_field	make_empty_field (void)
{
	t_field	res;
	int		i;

	res = malloc(sizeof(*res) * FIELD_SIZE);
	i = 0;
	while (i < FIELD_SIZE)
	{
		res[i] = 0;
		i++;
	}
	return (res);
}

t_field	find_field_rc (t_field field, t_rules rules, int pos)
{
	char	box;
	t_field	res;

	if (pos == 16)
		return (field);
	box = 1;
	while (box <= 4)
	{
		if (check_able_to_place(field, rules, pos, box))
		{
			field[pos] = box;
			res = find_field_rc(field, rules, pos + 1);
			if (res != 0)
			{
				return (res);
			}
		}
		box++;
	}
	field[pos] = 0;
	return (0);
}

t_field	find_field (t_rules rules)
{
	t_field	field;

	field = make_empty_field();
	field = find_field_rc(field, rules, 0);
	return (field);
}

void	print_field (t_field field)
{
	int	i;

	i = 0;
	while (i < FIELD_SIZE)
	{
		print_char(field[i] + '0');
		if (i % 4 == 3)
			print_char('\n');
		else
			print_char(' ');
		i++;
	}
}

int	main (int argc, char **argv)
{
	t_rules	rules;
	t_field	field;

	rules = get_rules(argc, argv);
	if (rules == 0)
	{
		print_str("Error\n");
		return (1);
	}
	field = find_field(rules);
	if (field == 0)
	{
		print_str("Error\n");
		return (1);
	}
	print_field(field);
	return (0);
}
