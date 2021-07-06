#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i]  && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char firstName[] = "Timothy";
	char secondName[] = "Eiffe";

	printf("%s\n%s\n", firstName, secondName);
	ft_strncpy(firstName, secondName, 5);
	printf("%s\n%s", firstName, secondName);
	return (0);
}
