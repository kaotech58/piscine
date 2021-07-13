int	ft_is_prime(int nb)
{
	int	i;
	int	check;

	check = 0;
	i = 2;
	if (nb <= 0)
		return (0);
	while (i <= nb / 2)
	{
		if (nb % i == 0)
		{
			check = 1;
			break ;
		}
		i++;
	}
	if (check == 1)
		return (0);
	else
		return (1);
}
