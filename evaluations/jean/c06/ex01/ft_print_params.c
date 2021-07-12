#include <unistd.h>

void	ft_putstr(char *str)
{
	char	*p;

	p = str;
	while (*p != 0)
	{
		write (1, p, 1);
		p++;
	}
	write (1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
