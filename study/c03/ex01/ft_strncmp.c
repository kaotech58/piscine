#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
	unsigned int	j;

	i = 0;
	while ((s1[i] != '\0') || s2[i] != '\0')
	{
		j = i;
		while (j < n)
		{
			if (s1[i] < s2[i])
			{
				return (-1);
			}
			if (s1[i] > s2[i])
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	char test1[]="12345677890";
	char test2[]="1234567890";
	printf("%d\n", ft_strncmp(test1, test2, 10));
}
