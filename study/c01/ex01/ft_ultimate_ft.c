#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int	main(void)
{
	int	pnbr;
	int	*nbr;

	pnbr = 42;
	nbr = &pnbr;
	printf("%d", *nbr);
}
