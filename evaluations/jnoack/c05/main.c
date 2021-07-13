//////////////////////////////////////////////////////////
//	This main tests C05 ex00 - ex07						//
//														//
//	If there are missing exercises, comment out their	//
//	declaration and usage in this main.					//
//														//
//	Conflicting function names can cause issues.		//
//	Change them in the exercises to resolve this.		//
//														//
//	e.g. ft_putchar(char c) -> ft_putchar1(char c)		//
//														//
//	For support or feedback, post a message in the		//
//	discord.											//
//														//
//	Solarcode | thardy									//
//////////////////////////////////////////////////////////

#include <stdio.h> // Used for printf

extern int	ft_iterative_factorial(int nb);
extern int	ft_recursive_factorial(int nb);
extern int	ft_iterative_power(int nb, int power);
extern int	ft_recursive_power(int nb, int power);
extern int	ft_fibonacci(int index);
extern int	ft_sqrt(int nb);
extern int	ft_is_prime(int nb);
extern int	ft_find_next_prime(int nb);

int	main(void)
{

//	ex00:
	printf("-------------------------------\nex00:	ft_iterative_factorial\n-------------------------------\nExpected output:	362880\nActual output:		%d\n\n", ft_iterative_factorial(9));

//	ex01:
	printf("-------------------------------\nex01:	ft_recursive_factorial\n-------------------------------\nExpected output:	362880\nActual output:		%d\n\n", ft_recursive_factorial(9));

//	ex02:
	printf("-------------------------------\nex02:	ft_iterative_power\n-------------------------------\nExpected output:	32768\nActual output:		%d\n\n", ft_iterative_power(8, 5));

//	ex03:
	printf("-------------------------------\nex03:	ft_recursive_power\n-------------------------------\nExpected output:	531441\nActual output:		%d\n\n", ft_recursive_power(9, 6));

//	ex04:
	printf("-------------------------------\nex04:	ft_fibonacci\n-------------------------------\nExpected output:	610\nActual output:		%d\n\n", ft_fibonacci(15));

//	ex05:
	printf("-------------------------------\nex05:	ft_sqrt\n-------------------------------\nExpected output:	0	12	46340\nActual output:		%d	%d	%d\n\n", ft_sqrt(44), ft_sqrt(144), ft_sqrt(2147395600));

//	ex06
	printf("-------------------------------\nex06:	ft_is_prime\n-------------------------------\nExpected output:	1	0	1	0	0\nActual output:		%d	%d	%d	%d	%d\n\n", ft_is_prime(2147483647), ft_is_prime(144), ft_is_prime(97), ft_is_prime(1), ft_is_prime(63));

//	ex07
	printf("-------------------------------\nex07:	ft_find_next_prime\n-------------------------------\nExpected output:	2	2147483647	97	67	449\nActual output:		%d	%d	%d	%d	%d\n\n", ft_find_next_prime(-23423), ft_find_next_prime(2147483647), ft_find_next_prime(90), ft_find_next_prime(62), ft_find_next_prime(444));
}
