#include	<stdio.h>

/**
 *get_bit	-	value	of	a	bit	at	given	index
 *@n:	decimal	parameter
 *@index:	is	the	index,	starting	from	0	of	the	bit	you	want	to	get
 *Return:	the	value	of	bit	at	index	index	or	-1	for	an	error
 */

int get_bit(unsigned long int n, unsigned int	index)
{
	int	bit;

	bit	=	(n	>>	index);
	if	(index	>	32)
		return	(-1);
	return	(bit	&	1);
}
