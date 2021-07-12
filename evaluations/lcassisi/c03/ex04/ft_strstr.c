char	*ft_strstr(char *str, char *to_find)
{
	int	x;
	int	y;

	x = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[x] != '\0')
	{
		j = 0;
		while (str[x + y] != '\0' && str[x + y] == to_find[j])
		{
			if (to_find[y + 1] == '\0')
				return (&str[x]);
			++y;
		}
		++x;
	}
	return (0);
}
