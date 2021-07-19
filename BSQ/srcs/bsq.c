/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fproto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:27:03 by fproto            #+#    #+#             */
/*   Updated: 2021/07/13 21:14:46 by fproto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	process_filename(char *filename)
{
	t_field	*field;

	field = parse_field(filename);
	if (field == 0)
	{
		ft_puterr("map error\n");
	}
	else
	{
		find_square(field, 0);
		free_field(field);
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
	{
		process_filename(0);
	}
	else
	{
		i = 1;
		while (i < argc)
		{
			if (i > 1)
				ft_putstr("\n");
			process_filename(argv[i]);
			i++;
		}
	}
	return (0);
}
