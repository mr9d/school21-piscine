/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fproto <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 13:19:42 by fproto            #+#    #+#             */
/*   Updated: 2021/07/13 21:13:43 by fproto           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H

# define BSQ_H

# define BUF_SIZE 1024

typedef struct s_field {
	int		h;
	int		w;
	char	emp;
	char	obs;
	char	full;
	char	**map;
	int		**matrix;
}	t_field;

typedef struct s_square {
	int	x;
	int	y;
	int	s;
}	t_square;

// ft_console.c

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_puterr(char *str);

// parse_field.c

t_field	*parse_field(char *filename);

// parse_lines.c

int		parse_first_line(char *buf, t_field *field);
t_field	*parse_other_line(char *buf, t_field *field,
			int *line_num, int *line_pos);

// parse_field2.c

int		get_line_width(char *buf);
t_field	*enlarge_field(t_field *field, int width);

// mallocs.c

char	**malloc_char_map(int height, int width);
t_field	*malloc_field(t_field *field);
t_field	*empty_field(void);
t_field	*malloc_field_matrix(t_field *field);

// frees.c

void	free_matrix(void **matrix, int height);
void	free_field(t_field *field);

//find_square.c

void	find_square(t_field *field, int max);

#endif
