#include	"main.h"

/**
 * _isupper	-	checks	for	uppercase	character
 * @c:	the	function	parameter
 * Return:	1	if	its	upper	case
 */

int _isupper(int c)
{
	if	(c	>=	'A'	&&	c	<=	'Z')
		return	(1);
	else
		return	(0);
}
