/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mragwyle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 17:55:26 by mragwyle          #+#    #+#             */
/*   Updated: 2021/07/04 17:55:29 by mragwyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "boxes.h"

void	print_rules (t_rules rules)
{
	int	i;

	if (rules == 0)
	{
		print_str("(null)\n");
		return ;
	}
	print_str("[");
	i = 0;
	while (i < RULES_SIZE)
	{
		print_char(rules[i] + '0');
		if (i < RULES_SIZE - 1)
			print_str(", ");
		i++;
	}
	print_str("]\n");
}

char	parse_rule(char ch)
{
	if (ch >= '1' && ch <= '4')
		return (ch - '0');
	return (0);
}

t_rules	get_rules(int argc, char **argv)
{
	t_rules	res;
	char	*str;
	int		i;

	if (argc != 2)
		return (0);
	str = argv[1];
	res = malloc(sizeof(*res) * RULES_SIZE);
	i = 0;
	while (i < RULES_SIZE)
	{
		if (str[i * 2] == '\0' || (i > 0 && str[i * 2 - 1] == '\0'))
			return (0);
		res[i] = parse_rule(str[i * 2]);
		if (res[i] == 0)
			return (0);
		i++;
	}
	if (str[i * 2 - 1] != '\0')
		return (0);
	return (res);
}
