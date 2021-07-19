/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lines.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mragwyle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 17:55:12 by mragwyle          #+#    #+#             */
/*   Updated: 2021/07/06 12:21:53 by fproto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	get_right (char *line)
{
	int	i;
	int	res;
	int	max;

	max = line[3];
	res = 1;
	i = 2;
	while (i >= 0)
	{
		if (line[i] > max)
		{
			max = line[i];
			res++;
		}
		i--;
	}
	return (res);
}

char	get_left (char *line)
{
	int	i;
	int	res;
	int	max;

	max = line[0];
	res = 1;
	i = 1;
	while (i < 4)
	{
		if (line[i] > max)
		{
			max = line[i];
			res++;
		}
		i++;
	}
	return (res);
}
