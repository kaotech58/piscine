#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	ft_putchar(nb);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_putnbr(42);
}
