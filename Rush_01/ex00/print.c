/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mragwyle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 17:55:19 by mragwyle          #+#    #+#             */
/*   Updated: 2021/07/04 17:55:21 by mragwyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_char (char c)
{
	write(1, &c, 1);
}

void	print_str (char *str)
{
	while (*str != '\0')
		write(1, str++, 1);
}