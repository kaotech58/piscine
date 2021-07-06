#include <unistd.h>

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		write(1, &str[len], 1);
		len++;
	}
}

int	main(void)
{
	ft_putstr("test");
	return (0);
}
