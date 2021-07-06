#include <unistd.h>

void	ft_putchar(char c);

void	ft_format(int hundreds, int tens, int singles)
{
	ft_putchar(hundreds);
	ft_putchar(tens);
	ft_putchar(singles);
	if (hundreds != 55)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	singles;
	int	tens;
	int	hundreds;

	hundreds = 47;
	while (hundreds != 57)
	{
		hundreds++;
		tens = hundreds;
		while (tens != 57)
		{
			tens++;
			singles = tens;
			while (singles != 57)
			{
				singles++;
				ft_format(hundreds, tens, singles);
			}
		}
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
