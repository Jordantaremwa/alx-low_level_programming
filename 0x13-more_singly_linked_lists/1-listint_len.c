#include	"lists.h"
#include	"stdio.h"

/**
 * listint_len	-	returns	the	number	of	elements	in	a	linked	listint_t	lists
 * @h:	pointer	to	the	header	of	the	listint_t	list
 * Return:	number	of	elements	in	the	listint_t	lists
 */

size_t listint_len(const listint_t *h)
{
	size_t	nodes	=	0;

	while	(h)
	{
		nodes++;
		h	=	h->next;
	}
	return	(nodes);
}
