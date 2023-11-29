#include	<stddef.h>

/**
 * int_index	-	searches	for	an	integer	in	an	array
 * @array:	array	to	search
 * @size:	number	of	elements	in	an	array
 * @cmp:	pointer	to	the	function	used	to	compare	values
 * Return:	index	of	the	first	element,	or	-1	if	no	element	matches
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if	(array	!=	NULL	&&	cmp	!=	NULL	&&	size	>	0)
	{
		int	i;

		for	(i	=	0;	i	<	size;	i++)
		{
			if	(cmp(array[i])	!=	0)
			{

				return	(i);
			}
		}
	}

	return	(-1);
}
