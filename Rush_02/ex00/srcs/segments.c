int	segments_count(int len)
{
	return (((len - 1) / 3) + 1);
}

int	segment_start(int len, int seg_num)
{
	return (len - (seg_num + 1) * 3);
}

int	segment_zero(char *number, int len, int seg_num)
{
	int	seg_start;
	int	i;

	seg_start = segment_start(len, seg_num);
	i = seg_start;
	while (i < seg_start + 3)
	{
		if (i >= 0 && number[i] != '0')
			return (0);
		i++;
	}
	return (1);
}
