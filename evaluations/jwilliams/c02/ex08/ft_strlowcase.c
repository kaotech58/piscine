#include	<unistd.h>

char	*ft_strlowcase(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] > 64) && (str[index] < 91))
		{
			str[index] = str[index] + 32;
		}
		index++;
	}
	return (str);
}
