#include <stdlib.h>

int	*ft_range(int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	i;

	i = 0;
	if (min >= max)
	{
		range = 0;
		return (0);
	}
	ptr = ft_range(min, max);
	if (ptr == 0)
		return (-1);
	*range = ptr;
	return (max - min);
}

int	*ft_range(int min, int max)
{
	int	counter;
	int	*ptr;
	int	i;

	i = 0;
	counter = max - min;
	ptr = malloc(sizeof(int) * counter);
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
