#include	<stdio.h>

/**
 * main	-	entry	point
 * Return:	always	0	(success)
 */

int	main(void)
{
int	lowercase	=	'a';
int	uppercase	=	'A';
while	(lowercase	<=	'z')
{
putchar(lowercase);
lowercase	+=	1;
}
while	(uppercase	<=	'Z')
{
putchar(uppercase);
uppercase	+=	1;
}
putchar('\n');
return	(0);

}
