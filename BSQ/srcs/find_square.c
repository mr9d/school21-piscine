/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_square.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hzona <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 16:34:19 by hzona             #+#    #+#             */
/*   Updated: 2021/07/13 17:38:02 by hzona            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <unistd.h>

t_field	*set_matrix(t_field *field)
{
	int	i;
	int	j;

	i = 0;
	while (i < field->h)
	{
		j = 0;
		while (j < field->w)
		{
			if (field->map[i][j] == field->obs)
			{
				field->matrix[i][j] = 0;
			}
			else
				field->matrix[i][j] = 1;
			j++;
		}
		i++;
	}
	return (field);
}

void	print_result(t_field *field, int x, int y, int side)
{
	int	i;
	int	j;

	i = 0;
	while (i < field->h)
	{
		j = 0;
		while (j < field->w)
		{
			if (i >= x - side && i <= x && j >= y - side && j <= y)
				field->map[i][j] = field->full;
			j++;
		}
		i++;
	}
	i = 0;
	while (i < field->h)
	{
		write(1, field->map[i], field->w);
		write(1, "\n", 1);
		i++;
	}
}

int	check_square(t_field *field, int i, int j)
{
	int	maxi;
	int	maxj;
	int	min;

	maxi = i + 1;
	maxj = j + 1;
	if (field->matrix[i][maxj] == 0 || field->matrix[maxi][j] == 0
		|| field->matrix[maxi][maxj] == 0)
		return (field->matrix[maxi][maxj]);
	min = field->matrix[i][maxj];
	if (min > field->matrix[maxi][j])
		min = field->matrix[maxi][j];
	if (min > field->matrix[i][j])
		min = field->matrix[i][j];
	return (min + 1);
}

void	find_square(t_field *fiel, int max)
{
	int	i;
	int	j;
	int	maxi;
	int	maxj;

	fiel = set_matrix(fiel);
	i = 0;
	while (i < fiel->h)
	{
		j = 0;
		while (j < fiel->w)
		{	
			if (fiel->matrix[i][j] != 0 && j < fiel->w - 1 && i < fiel->h - 1)
				fiel->matrix[i + 1][j + 1] = check_square(fiel, i, j);
			if (max < fiel->matrix[i][j])
			{
				max = fiel->matrix[i][j];
				maxi = i;
				maxj = j;
			}
			j++;
		}
		i++;
	}
	print_result(fiel, maxi, maxj, max - 1);
}
