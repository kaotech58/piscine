#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (*src[i] != '\0' && *src[i] < n)
	{
		*dest[i] = *src[i];
		i++;
	}
}
