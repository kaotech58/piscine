void	ft_putchar(char c);

void	display(int count)
{
	int	first;
	int	second;

	if (count > 9)
	{
		first = count / 10;
		second = count % 10;
		ft_putchar(first + 48);
		ft_putchar(second + 48);
	}
	else
	{
		ft_putchar('0');
		ft_putchar(count + 48);
	}
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			display(i);
			ft_putchar(' ');
			display(j);
			if (i < 98 || j < 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			++j;
		}
		++i;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
