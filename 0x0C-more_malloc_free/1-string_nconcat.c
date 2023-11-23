#include	"main.h"
#include	<stdlib.h>

/**
 * string_nconcat	-	concatenates	two	string	while	second	string	is	an	n	value
 * @s1:	string	one
 * @s2:	string	two
 * @n:	no	of	element	to	concatenate	for	s2
 * Return:	pointer	to	the	new	allocated	memory
 */

/**
 * str_len	-	calculate	the	length	of	a	string
 * @str:	the	input	string
 * Return:	the	length	of	the	string
 */


unsigned	int	str_len(char	*str)
{
	unsigned	int	len	=	0;
	while	(str[len]	!=	'\0')
	{
		len++;
	}
	return	(len);
}

char *string_nconcat(char *s1, char *s2, unsigned	int	n)
{
	char	*result;
	unsigned	int	len1,	len2,	i,	j;

	if	(s1	==	NULL)
	{
		s1	=	"";
	}

	if	(s2	==	NULL)
	{
		s2	=	"";
	}

	len1	=	str_len(s1);
	len2	=	str_len(s2);

	if	(n	>=	len2)
	{
		n	=	len2;
	}

	result	=	malloc((len1	+	n	+	1)	*	sizeof(char));

	if	(result	==	NULL)
	{
		return	(NULL);
	}

	for	(i	=	0;	i	<	len1;	i++)
	{
		result[i]	=	s1[i];
	}

	for	(j	=	0;	j	<	n;	j++)
	{
		result[i	+	j]	=	s2[j];
	}

	result[i	+	j]	=	'\0';

	return	(result);
}
