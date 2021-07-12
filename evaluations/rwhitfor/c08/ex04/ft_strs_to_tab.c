#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}
	return (j);
}

char	*ft_strdup(char	*src)
{
	int		k;
	char	*dest;

	k = 0;
	while (src[k] != '\0')
	{
		k++;
	}
	dest = (char *)malloc(sizeof(char *) * (k + 1));
	k = 0;
	if (dest != NULL)
	{
		while (src[k] != '\0')
		{
			dest[k] = src[k];
			k++;
		}
		dest[k] = '\0';
	}
	else
		return (NULL);
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int	ac, char	**av)
{
	int					i;
	struct s_stock_str	*array;

	i = 0;
	array = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (array == NULL)
		return (NULL);
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		i++;
	}
	array[i] = (struct s_stock_str){0, 0, 0};
	return (array);
}
