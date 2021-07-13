#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_program_name(char *str)
{
	char	*name;

	name = str;
	while (*name != '\0')
	{
		ft_putchar(*name);
		name++;
	}
	ft_putchar('\n');
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (i < argc)
	{
		ft_print_program_name(argv[0]);
		i++;
	}
	return (0);
}
