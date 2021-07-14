#include <unistd.h>

void	ft_putchar(char c);

void	ft_rev_params(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = argc - 1;
	while (i > 0)
	{
		ft_rev_params(argv[i]);
		ft_putchar('\n');
		i--;
	}
}
