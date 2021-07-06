#include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int	pnbr;
	int	*nbr;

	pnbr = 42;
	nbr = &pnbr;
	ft_ft(nbr);
	printf("nbr's size: %zd bytes\n", sizeof(nbr));
	printf("nbr's address is: %p\n", nbr);
	printf("nbr's value: %d\n", *nbr);
	return (0);
}
