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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_str_sort(char *tab[], int size)
{
	int		i;
	int		j;
	char	*p;

	i = 1;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (ft_strcmp(tab[j], tab[i]) < 0)
			{
				p = tab[i];
				tab[i] = tab[j];
				tab[j] = p;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	ft_str_sort(argv, argc);
	i = 1;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
