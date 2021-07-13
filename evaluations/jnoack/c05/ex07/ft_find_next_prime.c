int	ft_find_next_prime(int nb)
{
	int	i;
	int	check;

	if (nb <= 0)
		return (0);
	while (1)
	{
		i = 2;
		check = 0;
		while (i <= nb / 2)
		{
			if (nb % i == 0)
			{
				check = 1;
				break ;
			}
			i++;
		}
		if (check == 0)
			break ;
		nb++;
	}
	return (nb);
}
