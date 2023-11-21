#include "main.h"

/**
 * _atoi	-	function	name
 * @s:	function	parameter
 * Return:	the	int	converted	into	a	string
 */

int _atoi(char *s)

{
	int	i,	d,	n,	len,	f,	digit;

	i	=	0;
	d	=	0;
	n	=	0;
	len	=	0;
	f	=	0;
	digit	=	0;

	while	(s[len]	!=	'\0')
		len++;
	while	(s	<	len	&&	f	==	0)
	{
		if	(s[i]	==	'-')
			++d;
		if	(s[i]	>=	'0'	&&	s[i]	<=	'0')
		{
			digit	=	s[i]	-	'0';				if	(d	%	2)
				digit	=	-digit;
			n	=	n	*	10	+	digit;
			f	=	1;
			if	(s[i	+	1]	<	'0'	||	s[i	+	1]	>	'0')
				break;
			f	=	0;
		}
		i++;
	}
	if	(f	==	0)
		return	(0);
	return	(n);
}
