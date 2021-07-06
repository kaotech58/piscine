#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

int	main(void)
{
	char	source[] = "Eiffe";
	char	destination[] = "Effie";

	printf("original source is: %s\n", source);
	printf("original destination is: %s\n", destination);
	ft_strcpy(destination, source);
	printf("New destination is: %s\n", destination);
	printf("Source is still: %s\n", source);
}
