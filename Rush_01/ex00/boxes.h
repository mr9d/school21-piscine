/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boxes.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mragwyle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 17:54:52 by mragwyle          #+#    #+#             */
/*   Updated: 2021/07/04 17:54:57 by mragwyle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BOXES_H

# define BOXES_H

# define RULES_SIZE 	16
# define FIELD_SIZE		16

typedef char *t_field;
typedef char *t_rules;

void	print_char (char c);
void	print_str (char *str);

void	print_rules (t_rules rules);
t_rules	get_rules(int argc, char **argv);

char	get_right (char *line);
char	get_left (char *line);

char	check_has_duplicates (t_field field, int pos, char box);
char	check_hor_rules (t_field field, t_rules rules, int pos, char box);
char	check_ver_rules (t_field field, t_rules rules, int pos, char box);
char	check_follow_rules (t_field field, t_rules rules, int pos, char box);
char	check_able_to_place (t_field field, t_rules rules, int pos, char box);

#endif
