void	ft_putchar (char c);
void	ft_swap (int *a, int *b);
void	ft_putstr (char *str);
int		ft_strlen (char *str);
int		ft_strcmp (char *s1, char *s2);

int	main (void)
{
	int	a;
	int	b;

	a = 1;
	b = 2;
	ft_putchar('a');
	ft_swap(&a, &b);
	ft_putstr("str");
	ft_strlen("qwe");
	ft_strcmp("a", "b");
	return (0);
}
