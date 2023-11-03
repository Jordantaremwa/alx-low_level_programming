#include	<stdio.h>
#include	"main.h"

/**
 * main	-	entry	point
 * description:	prints	the	numbers	from	1	to	100	and	print	fizz	for	multiples	of	three	and	multiples	of	5	print	Buzz	and	both	3	and	5	print	FizzBuzz
 *
 * Return:	always	0
 */

int	main(void)

{

	int	i;

	for	(i	=	1;	i	<=	100;	i++)
	{
		if	(i	%	15	==	0)
			printf("FizzBuzz");
		else	if	(i	%	3	==	0)
			printf("fizz");
		else	if	(i	%	5	==	0)
			printf("Buzz");
		else
			printf("%i",	i);
		if	(i	<	100)
			printf("	");
	}
	print("\n");
	return	(0);

}
