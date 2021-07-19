#ifndef RUSH_02_H

# define RUSH_02_H

// nums9:	[0..9]		(len = 10)
// nums19:	[10..19]	(len = 10)
// nums90:	[20..90]	(len = 8) 
// num100: 	"100"
// pow1000:	[1000...]	(len = pow1000_len)

typedef struct s_dict {
	char	**nums9;
	char	**nums19;
	char	**nums90;
	char	*num100;
	char	**pow1000;
	int		pow1000_len;
}	t_dict;

# define BUF_SIZE 1024
# define DEFAULT_FILENAME "numbers.dict"
# define ERROR_MSG "Error\n"
# define ERROR_DICT_MSG "Dict Error\n"

// lines.c

char	**malloc_lines(char	**lines, char	*filename);
char	**read_lines(char **lines, char *filename);

// lines2.c

int		count_char(char *str, int limit, char ch);
int		count_lines(char	*filename);
void	zero_lines(char **lines, int len);
void	free_lines(char **lines, int len);

// lines3.c

int		check_line_valid(char *line);
int		check_lines_valid(char **lines, int lines_count);
int		parse_line(char *line, char **number, char **printable);
void	free_str(char *str);

// dict.c

t_dict	*parse_dict(char	*filename);
void	print_dict(t_dict *dict);

// dict2.c

t_dict	*zero_dict(t_dict *dict, int pow1000_len);
void	free_dict(t_dict *dict);

// pow1000.c

int		get_pow1000_max(char **lines, int lines_count);
int		get_pow1000(char *number);

// dict_save.c

int		save_line(char *number, char *printable, t_dict *dict);

// ft_console.c

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_puterr(char *str);

// params.c

int		parse_params(int argc, char **argv, char **number, char**filename);
int		valid_uns_int(char *str);

// strings.c

int		ft_strlen(char *str);

// segments.c

int		segments_count(int len);
int		segment_start(int len, int seg_num);
int		segment_zero(char *number, int len, int seg_num);

//output
void	output(char *str, t_dict *nbr, int pre_space);

//auf
char	*ft_ddd(int i, t_dict *nbr);
void	ft_mmm(char *argv, int i, t_dict *nbr, int pre_space);
char	*ft_strm(char *argv, int i, char *room);
void	ft_a2(char *argv, t_dict *nbr, int pre_space);

#endif
