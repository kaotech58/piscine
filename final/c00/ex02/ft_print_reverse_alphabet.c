#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_reverse_alphabet(void)
{
	int	count;

	count = 122;
	while (count != 96)
	{
		ft_putchar(count);
		count--;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
