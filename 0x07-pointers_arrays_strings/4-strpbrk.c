
#include	"main.h"

/**
 * _strpbrk	-	function	name
 * @s:	the	string	to	be	searched
 * @accept:	the	set	of	bytes	to	be	searchedfor
 * Return:	if	a	set	is	matched	-	a	pointer	to	the	matched	byte
 * if	no	set	is	matched	-	null
 */

char *_strpbrk(char *s, char *accept)

{

	int	index;

	while	(*s)
	{
		for	(index	=	0;	accept[index];	index++)
		{
			if	(*s	==	accept[index])
				return	(s);
		}

		s++;
	}
	return	('\0');

}
