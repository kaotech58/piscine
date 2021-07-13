int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	sum;

	sum = nb;
	i = 1;
	if (power == 0)
		return (1);
	else if (power < 1)
		return (0);
	while (i < power)
	{
		sum = sum * nb;
		i++;
	}
	return (sum);
}
