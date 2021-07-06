#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	count;

	count = 97;
	while (count != 123)
	{
		ft_putchar(count);
		count++;
	}
}
