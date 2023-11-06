#include	"main.h"

/**
 * print_rev	-	function	that	prints	a	string
 * @s:	parameter	to	be	used
 */

void print_rev(char *s)

{

int	i;
int	count	=	0;

for	(i	=	0;	s[i]	!=	'\0';	i++)
	count++;

for	(i	=	count	-	1;	i	>=	0;	i--)
{	
	putchar	(s[i]);
}
	putchar	('\n');

}
