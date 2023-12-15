#include	"main.h"

/**
 * clear_bit	-	sets	the	value	of	a	bit	to	a	given	index	to	0
 * @n:	a	pointer	to	the	bit
 * @index:	the	index	to	set	the	value	to	0
 * Return:	-1	or	1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if	(index	>=	sizeof(unsigned	long	int)	*	8)
		return	(-1);

	*n	&=	~(1UL	<<	index);

	return	(1);
}
