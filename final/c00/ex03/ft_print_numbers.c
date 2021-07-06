#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_numbers(void)
{
	int	count;

	count = 48;
	while (count != 58)
	{
		ft_putchar(count);
		count++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
