/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frees.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fproto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 18:32:44 by fproto            #+#    #+#             */
/*   Updated: 2021/07/13 21:28:05 by fproto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdlib.h>

void	free_matrix(void **matrix, int height)
{
	int	i;

	if (matrix == 0)
		return ;
	i = 0;
	while (i < height)
	{
		if (matrix[i] != 0)
			free(matrix[i]);
		i++;
	}
	free(matrix);
}

void	free_field(t_field *field)
{
	if (field == 0)
		return ;
	free_matrix((void **)field->map, field->h);
	free_matrix((void **)field->matrix, field->h);
	free(field);
}
