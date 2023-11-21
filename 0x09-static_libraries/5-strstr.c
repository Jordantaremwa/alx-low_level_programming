#include	"main.h"

/**
 * _strstr	-	locates	a	sub	string
 * @haystack:	the	string	to	be	searched
 * @needle:	the	substring	to	be	located
 * Return:	if	the	substring	is	located	-	a	pointer	to	the	beginning	of	a	located	string
 * if	the	substring	is	not	located	-	null
 */

char *_strstr(char *haystack, char *needle)

{

	int	index;

	if	(*needle	==	0)
		return	(haystack);

	while	(*haystack)
	{
		index	=	0;
		
		if	(haystack[index]	==	needle[index])
		{
			do	{
					if	(needle[index	+	1]	==	'\0')
						return	(haystack);
					index++;

			}	while	(haystack[index]	==	needle[index]);
					}

					}

}
