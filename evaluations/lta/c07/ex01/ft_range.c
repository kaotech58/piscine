#include <stdlib.h>
#include <stdio.h>
int	*ft_range(int min, int max)
{
	int	counter;
	int	*ptr;
	int	i;

	i = 0;
	counter = max - min;
	ptr = malloc(sizeof(int) * counter);
	if ((ptr == 0) || (min >= max))
		return (0);
	while (min < max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
