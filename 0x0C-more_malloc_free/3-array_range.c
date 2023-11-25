#include	"main.h"
#include	<stdlib.h>

/**
 * array_range	-	function	name
 * @min:	minimum	value
 * @max:	maximum	value
 * Return:	int	pointer	to	the	allocated	memory
 */

int *array_range(int min, int max)

{
	int	size,	i;
	int	*result;

	if	(min	>	max)
	{
		return	(NULL);
	}
	size	=	max	-	min	+	1;

	result	=	(int	*)malloc(size	*	sizeof(int));

	if	(result	==	NULL)
	{
		return	(NULL);
	}

	for	(i	=	0;	i	<	size;	i++)
	{
		result[i]	=	min	+	i;
	}
	return	(result);
}
