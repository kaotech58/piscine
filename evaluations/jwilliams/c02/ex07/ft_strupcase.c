#include	<unistd.h>

char	*ft_strupcase(char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		if ((str[index] > 96 ) && (str[index] < 123))
		{
			str[index] = str[index] - 32;
		}
		index++;
	}
	return (str);
}
