#include	<stdarg.h>
#include	<stdio.h>
#include	"variadic_functions.h"

/**
 * print_all	-	prints	anything
 * @format:	a	list	of	types	of	arguments	passed	to	the	function
 * c:	char
 * i:	integer
 * f:	float
 * s:	char	*	(fi	the	string	is	NULL,	print	(nil)	instead)
 * any	pther	char	should	be	ignored
 * @...:	variable	number	of	arguments
 */

void print_all(const char * const format, ...)
{
	va_list	args;
	unsigned	int	i	=	0;
	char	*separator	=	"";
	char	*current_string;

	va_start(args,	format);

	while	(format	&&	format[i])
	{
		switch	(format[i])
		{
			case	'c':
				printf("%s%c",	separator,	va_arg(args,	int));
				break;
			case	'i':
				printf("%s%d",	separator,	va_arg(args,	int));
				break;
			case	'f':
				printf("%s%f",	separator,	va_arg(args,	double));
				break;
			case	's':
				current_string	=	va_arg(args,	char	*);
				if	(current_string	==	NULL)
					current_string	=	"(nil)";
				printf("%s%s",	separator,	current_string);
				break;
			default:
			i++;
			continue;
		}
		separator	=	",	";

		i++;
	}

	printf("\n");

	va_end(args);

}

