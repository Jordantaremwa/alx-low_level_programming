#include	"main.h"

/**
 *binary_to_uint	-	converts	a	binary	number	to	unsigned	int
 *@b:	a	pointer	to	a	string	containing	0	and	1	characters
 *Return:	the	converted	number,	or	0	if	there	is	an	invalid	character
 *if	b	is	NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned	int	result	=	0;

	if	(b	==	NULL)
		return	(0);

	while	(*b	!=	'\0')
	{
		if	(*b	!=	'0'	&&	*b	!=	'1')
			return	(0);

		result	=	(result	<<	1)	+	(*b	-	'0');
		b++;
	}
	return	(result);
}
