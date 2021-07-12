#include <stdlib.h>

int		ft_strlen(char *c);
int		ft_counter(int size, char **strs);
char	*ft_strcat(char *dest, char *src);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*ptr;

	i = 0;
	ptr = malloc(ft_counter(size, strs)
			+ (ft_strlen(sep) * (size - 1)) + 1);
	if (ptr == 0)
		return (0);
	if (size == 0)
	{
		ptr = malloc(0);
		return (ptr);
	}
	while (i < size)
	{
		ft_strcat(ptr, strs[i]);
		if (i != size - 1)
			ft_strcat(ptr, sep);
		i++;
	}
	i = (ft_counter(size, strs) + (ft_strlen(sep) * (size - 1))) + 1;
	ptr[i] = '\0';
	return (ptr);
}

int	ft_counter(int size, char **strs)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (i < size)
	{
		count = count + ft_strlen(strs[i]);
		i++;
	}
	return (count);
}

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_start;
	int	i;

	i = 0;
	dest_start = 0;
	while (dest[dest_start] != '\0')
	{
		dest_start++;
	}
	while (src[i] != '\0')
	{
		dest[dest_start + i] = src[i];
		i++;
	}
	dest[dest_start + i] = '\0';
	return (dest);
}
