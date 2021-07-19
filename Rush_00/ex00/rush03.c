/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fproto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 12:31:39 by fproto            #+#    #+#             */
/*   Updated: 2021/06/27 19:13:26 by mragwyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern void	ft_putchar (char c);

void	header (int x, int y)
{
	int	i;

	if (y <= 0 || x <= 0)
		return ;
	ft_putchar('A');
	i = 0;
	while (i++ < x - 2)
		ft_putchar('B');
	if (x >= 2)
		ft_putchar('C');
	ft_putchar('\n');
}

void	body (int x, int y)
{
	int	i;
	int	j;

	if (y <= 2 || x <= 0)
		return ;
	j = 0;
	while (j++ < y - 2)
	{
		ft_putchar('B');
		if (x <= 1)
		{
			ft_putchar('\n');
			continue ;
		}
		i = 0;
		while (i++ < x - 2)
			ft_putchar(' ');
		ft_putchar('B');
		ft_putchar('\n');
	}
}

void	footer (int x, int y)
{
	int	i;

	if (y <= 1 || x <= 0)
		return ;
	ft_putchar('A');
	if (x <= 1)
	{
		ft_putchar('\n');
		return ;
	}
	i = 0;
	while (i++ < x - 2)
		ft_putchar('B');
	ft_putchar('C');
	ft_putchar('\n');
}

void	rush (int x, int y)
{
	header(x, y);
	body(x, y);
	footer(x, y);
}
