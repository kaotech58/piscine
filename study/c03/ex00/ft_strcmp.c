//#include <stdio.h>
#include <string.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] < s2[i])
		{
			return (-1);
		}
		if (s1[i] > s2[i])
		{
			return (1);
		}
		i++;
	}
	return (0);
}

//int	main(void)
//{
//	char	string1[20] = "abcdef";
/*	char	string2[] = "abce";
	char	string3[] = "abcd";
	char	string4[] = "abcc";

	printf("should be 1 then 0\n");
	printf("these two arrays don't match: %d\n", ft_strcmp(string3, string4));
	printf("these two arrays do match: %d\n", ft_strcmp(string3, string3));
	printf("these two arrays don't match: %d\n", ft_strcmp(string3, string2));
*/
//	}
