#include <unistd.h>

void	print_field (int field[])
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = field[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

int	is_field_valid (int field[], int pos, int val)
{
	int	i;

	i = pos - 1;
	while (i >= 0)
	{
		if (field[i] == val)
			return (0);
		if (field[i] - val == pos - i)
			return (0);
		if (val - field[i] == pos - i)
			return (0);
		i--;
	}
	return (1);
}

int	check_queens_rc (int field[], int pos)
{
	int	i;
	int	sum;

	if (pos == 10)
	{
		print_field(field);
		return (1);
	}
	i = 0;
	sum = 0;
	while (i < 10)
	{
		if (is_field_valid(field, pos, i))
		{
			field[pos] = i;
			sum += check_queens_rc(field, pos + 1);
		}
		i++;
	}
	return (sum);
}

int	ft_ten_queens_puzzle (void)
{
	int	field[10];

	return (check_queens_rc(field, 0));
}
