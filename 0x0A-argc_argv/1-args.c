#include	<stdio.h>

/**
 * main	-	prints	the	number	of	arguments	passed	into	it
 * @argc:	number	of	command	line	argument
 * @argv:	array	that	contain	the	program	commad	line	argument
 * Return:	(0)	successful
 */

int	main(int	argc,	char	**argv	__attribute__((unused)))

{
	printf("%d\n",	argc	-	1);
	return	(0);
}
