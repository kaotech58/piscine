int	ft_sqrt(int nb)
{
	int	root;
	int	i;

	i = 0;
	root = 1;
	if (nb < 1)
		return (0);
	while (1)
	{
		i++;
		root = (nb / root + root) / 2;
		if (i == nb + 1)
			break ;
	}
	if (root * root == nb)
		return (root);
	return (0);
}
