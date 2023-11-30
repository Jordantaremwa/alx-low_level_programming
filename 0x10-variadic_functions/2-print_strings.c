#include	<stdarg.h>
#include	<stdio.h>
#include	"variadic_functions.h"

/**
 * print_strings	-	prints	strings	followed	by	new	line
 * @separator:	the	string	to	be	printed
 * @n:	the	number	of	strings	passed	to	the	function
 * @...:	variable	number	of	strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list	args;
	unsigned	int	i;
	char	*current_string;

	va_start(args,	n);

	for	(i	=	0;	i	<	n;	i++)
	{
		current_string	=	va_arg(args,	char	*);
		if	(current_string	==	NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s",	current_string);
		}

		if	(separator	!=	NULL	&&	i	<	n	-	1)
		{
			printf("%s",	separator);
		}
	}

	printf("\n");

	va_end(args);
}
